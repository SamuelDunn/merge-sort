/*
 Definitions for the functions used to implement my version of the merge-sort
 algorithm.
*/

#include "my_merge_sort.hpp"

void myMergeSort(int *arrayToSort, int size) {
   myMergeSort(arrayToSort, 0, size - 1);
}


void myMergeSort(int *arrayToSort, int first, int end) {
   if(end - first <= 0) {
      return;
   } else {
      int left = first + (end - first) / 2;
      int right = left + 1;
      myMergeSort(arrayToSort, first, left);
      myMergeSort(arrayToSort, right, end);

      merge(arrayToSort, first, left, right, end);
   }
}


void merge(int *arrayToSort, int first, int left, int right, int end) {

   int startOfSection = first;
   int *temp = new int[end - first + 1];
   int count = 0;

   while(first <= left && right <= end) {
      if(arrayToSort[first] < arrayToSort[right]) {
         temp[count] = arrayToSort[first];
         first ++;
      } else {
         temp[count] = arrayToSort[right];
         right++;
      }
      count ++;
   }
   while(first <= left) {
      temp[count] = arrayToSort[first];
      first ++;
      count ++;
   }
   while(right <= end) {
      temp[count] = arrayToSort[right];
      right ++;
      count ++;
   }
   count = 0;
   for(int i = startOfSection; i <= end; i ++, count ++) {
      arrayToSort[i] = temp[count];
   }
   delete [] temp;
}



