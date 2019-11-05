#include<stdio.h>

// If number in into array return its position, else -1.
int LinearSearch(int array[], int size, int number) {
    for (int i = 0; i < size; i++)
        if (array[i] == number)
            return i;
    
    return -1;
}

int main() {
    int arr[] = {9, 5, 13, 54, 64};
    int size = sizeof(arr) / sizeof(arr[0]);

    int x;
    scanf("%d", &x);

    if (LinearSearch(arr, size, x) >= 0)
        printf("Number found.\n");
    else
        printf("Number not found.\n");

    return 0;
}