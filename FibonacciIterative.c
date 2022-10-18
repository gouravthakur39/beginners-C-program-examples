// Fibonacci Series using Iteration
#include <stdio.h> 

// fib function
unsigned long long fib(int n) 
{ 
    int preprevious = 1, previous = 0, current = 0;

    for (int i = 1; i <= n; i++) {
        current = preprevious + previous;
        preprevious = previous;
        previous = current;
    }

    return current; 
} 
  
int main() 
{ 
	// Input example
    int n = 11; 

    // Printing the nth Fibanocci Number
    printf("%llu\n", fib(n));
} 
