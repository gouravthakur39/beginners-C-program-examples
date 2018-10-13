#include <stdio.h>

/* If x in into array return 0, else 1 */
/* 
 * A function with 4 params:
 * int[] = array of elements
 * int = wanted number
 * int = start index
 * int = end index
 *
 * returns 0 or 1
 */
int binarySearch(int[], int, int, int);

int main() {
	int arr[] = {5, 15, 24, 32, 56, 89};
    /* check length of array */
	int size_of_array = sizeof(arr) / sizeof(int);
	/* Check if 24 is into arr */
	printf("%d\n", binarySearch(arr, 24, 0, size_of_array-1));
	/* Check if 118 is into arr */
	printf("%d\n", binarySearch(arr, 118, 0, size_of_array-1));
	return 0;
}

int binarySearch(int array[], int number, int start, int end) {
    /* if start index is get end index, check if that element is equals wanter nmber */
	if(start >= end) {
		return array[start] == number ? 0 : 1;
	}

	int tmp = (int) end / 2;
    /* divide array length in half */
    /* if number is greater than element in half, do search by start to tmp
	 * else search by tmp to end
     */
	if(number == array[tmp]) {
		return 0;
	} else if(number > array[tmp]) {
		return binarySearch(array, number, start, tmp);
	} else {
		return binarySearch(array, number, tmp, end);
	}
}


