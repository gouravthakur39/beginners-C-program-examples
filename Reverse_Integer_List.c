#include <stdio.h>

void reverse(long long *arr, long long n);

int main(void){
	long long arr[5] = { }, i, n = 5;
	for(i = 0; i < n; i++)
		scanf("%ld", &arr[i]);
	reverse(arr, n);
	for(i = 0; i < n; i++)
		printf("%ld ", arr[i]);
	return 0;
}

void reverse(long long *arr, long long n){
	long long i, j = n - 1;
	for(i = 0; i < n / 2; i++){
		arr[i] += arr[j];
		arr[j] = arr[i] - arr[j];
		arr[i] -= arr[j];
		j--;
	}
}