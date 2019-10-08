#include <stdlib.h>
#include <stdio.h>

int last_digit_fib_optimized(const int index)
{
	int first = 0; 
	int second = 1;
	int current = 0;

	for (int i = 2; i <= index; ++i) {
		current = (first + second) % 10;
		first = second;
		second = current;
	}

	return (current);
}

/* This is the direct solution for reference */
int last_digit_fib_naive(const int index)
{
	int *arr;
	arr = (int *)malloc((index+1) * sizeof(int));
	arr[0] = 0;
	arr[1] = 1;

	for (int i = 2; i <= index; ++i) { // store only the last digit of each index
		arr[i] = (arr[i - 1] + arr[i - 2]) % 10;
	}

	int res = arr[index];
	return (res);
}

int main(int argc, char **argv)
{
	int index = 0;
	scanf("%d", &index);

	printf("%d\n", last_digit_fib_optimized(index));
	
	return 0;
}