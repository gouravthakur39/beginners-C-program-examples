//C program to input a matrix of order MxN and find its transpose

#include <stdio.h>
#include<conio.h>
int main()
{
    static int array[10][10];
    int i, j, row, col;

    printf("Enter the order of the matrix \n");
    scanf("%d %d", &row, &col);
    printf("Enter the coefficients of the matrix\n");
    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < col; ++j)
        {
            scanf("%d", &array[i][j]);
        }
    }
    printf("The given matrix is \n");
    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < col; ++j)
        {
            printf(" %d", array[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of matrix is \n");
    for (j = 0; j < col; ++j)
    {
        for (i = 0; i < row; ++i)
        {
            printf(" %d", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
