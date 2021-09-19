#include <math.h>
#include <stdio.h>

int main(void)
{
    int n, i, j, sum1 = 0, sum2 = 0; // n denotes the number of rows and columns in the matrix arr.

    printf("Enter n:");
    scanf("%d", &n);
    int arr[n][n];

    printf("Enter elements of matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            // Taking diagonal sum of the matrix arr from the both side
            if(arr[i][j] >= -100 && arr[i][j] <= 100)
            {
                if(i == j)
                    sum1 += arr[i][j];
                if(j == (n - 1 - i))
                    sum2 += arr[i][j];
            }
        }
    }
    // This code part belongs to the absolute difference between the sums of the matrix's along two diagonals
    if((sum1 - sum2) < 0)
    {
        printf("Output is %d\n", (-((sum1) - (sum2))));
    }
    else
    {
        printf("Output is %d\n", ((sum1) - (sum2)));
    }
    return 0;
}

/*
Sample Input

3
11 2 4
4 5 6
10 8 -12
Sample Output

15

Explanation

The primary diagonal is:

11
   5
     -12
Sum across the primary diagonal: 11 + 5 - 12 = 4

The secondary diagonal is:

     4
   5
10
Sum across the secondary diagonal: 4 + 5 + 10 = 19
Difference: |4 - 19| = 15
*/
