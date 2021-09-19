#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int r = 3, c = 4;
    int *arr = malloc(r * c * sizeof(int));

    int i, j, count = 0;
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            *(arr + i * c + j) = ++count;

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            printf("%d ", *(arr + i * c + j));

    printf("\n");
    /* Code for further processing and free the
       dynamically allocated memory */

    // free(arr);

    return 0;
}
