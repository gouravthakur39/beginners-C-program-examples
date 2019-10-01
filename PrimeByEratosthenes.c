#include <stdio.h>
#include <stdlib.h>
 
#define limit 100 /*size of integers array*/
 
int main(){
    unsigned long long int i,j;
    int *primes;				//pointer created for prime
    int z = 1;
 
    primes = malloc(sizeof(int) * limit);	//allocating 100 spaces in memory with the starting address to prime pointer
 
    for (i = 2;i < limit; i++)			//initializing the 100 memory spaces
        primes[i] = 1;
 
    for (i = 2;i < limit; i++)			//Filling the array with prime numbers as per the method proposed by seive of eratosthenes
        if (primes[i])
            for (j = i;i * j < limit; j++)
                primes[i * j] = 0;
 
    printf("\nPrime numbers in range 1 to 100 are: \n");

    for (i = 2;i < limit; i++)			//Printing the prime numbers in the range from 1 to 100
        if (primes[i])
            printf("%d\n", i);
 
return 0;
}