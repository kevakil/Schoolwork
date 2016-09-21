#include <stdio.h>
// initialize an array of any size to be sorted
// Given test case: 
int Array[12] = {20, 13, 6, -1, 15, 29, 4, 2, 18, 10, -4, 15};
// n = 1: int Array[1] = {2};
// n = 0: int Array[0] = {};
// multiple 0s 1s and -1s:
// int Array[10] = {0, 0, -1, 1, -1, 0, 0, -1, 1, 1};
//int Array[3] = {-2147483649, 2147483648, 0};
// PrintArray method given by instructors that takes as input an array and its length to print the values in the array
void PrintArray(int Arr[], int n) {
  int i;
  // iterates through the entire array and prints the values
  for (i=0; i < n; i++) {
    printf("%d ", Arr[i]);
  }
}

// Swap method completed by me that takes two pointers for integers as inputs and swaps their memory locations corresponding to them
void Swap(int *x, int *y) {
  // assign a temp variable to store the pointer for x without overwriting it
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

// BubbleSort method provided by instructors that takes as input an array and its length and sorts it using the Bubble Sort algorithm
void BubbleSort(int Arr[], int n) {
  int i, j;
  // first for loop to iterate backwards from end of unsorted portion
  for (i = n-2; i >= 0; i--) {
    // second for loop to iterate from beginning of unsorted portion to end of unsorted portion
    for (j = 0; j <= i; j++) {
      // if a value contained at an index is greater than that of the next highest index
      if (Arr[j] > Arr[j+1]) {
	// swap the values contained in the two indeces
	Swap(&Arr[j], &Arr[j+1]);
      }
    }
  }
}

// main method provided by instructors to test the algorithm
int main() {
  // sort the given array
  BubbleSort(Array, 12);
  // print the array
  printf("The sorted array is: ");
  // print the sorted array
  PrintArray(Array,12);
  printf("\n");
}
