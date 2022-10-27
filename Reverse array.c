#include <stdio.h>
#include <stdlib.h>
#define n 6
int main(){
    int arr[n] = {9, 8, 7, 2, 4, 3};
    int temp;
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++){
        printf("%d,", arr[i]);
    }
}
