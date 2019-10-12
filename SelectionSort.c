#include <stdio.h>

//function for swapping two numbers
void swap(int * xp, int * yp) {
  int temp = * xp;
  * xp = * yp;
  * yp = temp;
}

void selectionSort(int arr[], int n) {
  int i, j, min_idx;

  // One by one move boundary of unsorted subarray 
  for (i = 0; i < n - 1; i++) {
    // Find the minimum element in unsorted array 
    min_idx = i;
    for (j = i + 1; j < n; j++)
      if (arr[j] < arr[min_idx])
        min_idx = j;

    // Swap the found minimum element with the first element 
    //so that the minimum element of unsorted subarray
    //comes to first position
    swap( & arr[min_idx], & arr[i]);
  }
}

int main() {

  int n, i; //n is size of array
  printf("Enter the number of elements ");
  scanf("%d",&n);
  int a[n]; //array of n integers to be sorted
  printf("Enter the elements ");
  for (i = 0; i < n; i++)
    scanf("%d",&a[i]);

  selectionSort(a, n); //calling the function to sort the array
  //printing sorted array
  for (i = 0; i < n; i++)
    printf("%d ", a[i]);

  return 0;
}
