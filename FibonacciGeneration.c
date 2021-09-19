// Fibonacci Series using Recursion
#include <stdio.h>

// fib function with argument n to generate nth fibonacci Number
unsigned fib(unsigned n)
{
    // Base case defined
    if(n <= 1)
    {
        return n;
    }

    // Recursive Calls to fib function
    return fib(n - 1) + fib(n - 2);
}
int main(void)
{
    // Sample input
    unsigned n;
    printf("Enter n:");
    scanf("%u", &n);
    // Printing the nth fibonacci Number
    printf("Fibonacci is:%u\n", fib(n));
    return 0;
}
