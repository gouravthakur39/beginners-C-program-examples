// Fibonacci Series using Recursion 
#include <stdio.h> 

// fib function with argument n to generate nth Fibanocci Number
int fib(int n) 
{ 
	// Base case defined
    if (n <= 1){ 
        return n; 
    }

    // Recursive Calls to fib function
    return fib(n - 1) + fib(n - 2); 
} 
  
int main() 
{ 
	// Sample input
    int n = 11; 

    // Printing the nth Fibanocci Number
    printf("%d", fib(n));
} 