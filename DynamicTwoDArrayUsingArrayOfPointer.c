#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int r = 3, c = 4, i, j, count;

    int *arr[r];
    for(i = 0; i < r; i++)
        arr[i] = malloc(c * sizeof(int));

    // Note that arr[i][j] is same as *(*(arr+i)+j)
    count = 0;
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            arr[i][j] = ++count; // Or *(*(arr+i)+j) = ++count

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            printf("%d ", arr[i][j]);

    printf("\n");
    /* Code for further processing and free the
       dynamically allocated memory */

    return 0;
}
