#include <stdio.h>
#include <stdlib.h>

int main() {
    int r = 3, c = 4;
    int * arr = (int * ) malloc(r * c * sizeof(int));

    int i, j, count = 0;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            *
            (arr + i * c + j) = ++count;

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            printf("%d ", *(arr + i * c + j));

    /* Code for further processing and free the  
        dynamically allocated memory */

    return 0;
}
