#include <stdio.h>
#include <stdlib.h>

long long* count_sort_naive(long long *arr, long n, long m)
{
	long long *count_arr = malloc((m + 1) * sizeof(long long));
	long long *sorted_arr = malloc(n * sizeof(long long));

	long i_arr = 0;
	for (long i = 0; i <= m; ++i) {
		/* compute the frequency of the ith element */
		for (long j = 0; j < n; ++j) {
			if (arr[j] == i) {
				count_arr[i] += 1;
			}
		}

		/* place the ith element count number of times */
		for (long j = 0; j < count_arr[i]; ++j) {
			sorted_arr[i_arr] = i;
			i_arr += 1;
		}
	}
	free(arr);

	return sorted_arr;
}

int main()
{
	/* Enter the size of the array */
	long n = 0;
	printf("Enter the number of elements to be sorted: ");
	scanf("%ld", &n);

	/* Enter the range of the array [0 .. m] */
	long m = 0;
	printf("Enter the maximum value of the numbers to be sorted: ");
	scanf("%ld", &m);

	/* Enter the values of the array */
	printf("Enter the values to be sorted: ");
	long long *arr = malloc(n * sizeof(long long));
	for (long i = 0; i < n; ++i) {
		scanf("%lld", &arr[i]);
	}

	arr = count_sort_naive(arr, n, m);

	printf("After sorting\n");
	for (long i = 0; i < n; ++i) {
		printf("%lld ", arr[i]);
	}
}