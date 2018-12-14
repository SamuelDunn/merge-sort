/*
 This file contains the declarations for the functions used to implement the
 merge-sort algorighm.


 void myMergeSort(int *arrayToSort, int first, int end);
 Recursive function that divides the array to sort into halves recursively until
 the base case is reached and then calls merge().
 "arrayToSort" myst be a plain old array of type int.
 "first" is the first element of the section of the array that the function is
 currently working with.
 "end" is the last element of the section of the array that the function is
 currently working with.


 void merge(int *arrayToSort, int first, int left, int right, int end);
 Carries out the bulk of the merge-sort algorithm merging the sections of the
 array that myMergeSort() divided while at the same time sorting them.
 "arrayToSort" must be a plain old array of type int.
 "first" is the first element of the left division of the array to sort.
 "left" is the last element of the left division of the array to sort.
 "right" is the first element of the right division of the array to sort.
 "end" is the last element of the right division of the array to sort.


 void myMergeSort(int *arrayToSort, int size);
 Is a helper function that provides a way to access the recursive version of
 of myMergeSort(). This is the function that should be called by the client.
 The input array is pass by reference and calling this function will manipulate
 the input array itself.
 "arrayToSort" must be a plain old array of type int.
 "size is" the size of the input array.
*/


#ifndef my_merge_sort_hpp
#define my_merge_sort_hpp

void myMergeSort(int *arrayToSort, int first, int end);
void merge(int *arrayToSort, int first, int left, int right, int end);
void myMergeSort(int *arrayToSort, int size);

#endif
