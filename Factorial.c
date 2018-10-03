include <stdio.h>
int main()
{
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d",&n);

    // SHow error if number is less than 100
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");

    else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;              // factorial = factorial*i;
        }
        printf("Factorial of %d = %llu", n, factorial);
    }

    return 0;
}
