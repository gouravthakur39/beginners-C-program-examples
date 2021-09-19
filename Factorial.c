#include <stdint.h>
#include <stdio.h>

int main(void)
{
    int n, i;
    uintmax_t factorial = 1; // max width unsigned since C99

    // printf("size is %zu\n",sizeof(uintmax_t));
    printf("Enter a number: ");
    scanf("%d", &n);

    // Show error if number is less than 0
    if(n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");

    else
    {
        for(i = 1; i <= n; ++i)
        {
            factorial *= i; // factorial = factorial*i;
        }
        printf("Factorial of %d = %ju\n", n, factorial);
    }

    return 0;
}
