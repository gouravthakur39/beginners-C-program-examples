#include <stdio.h>
#include <stdlib.h>

#define LIMIT 100		/*size of integers array */

int main(void)
{
    unsigned long long int i, j;
    int *primes;		//pointer created for prime
    //int z = 1;

    primes = malloc(sizeof(int) * LIMIT);	//allocating 100 spaces in memory with the starting address to prime pointer

    for (i = 2; i < LIMIT; i++)	//initializing the 100 memory spaces
	primes[i] = 1;

    for (i = 2; i < LIMIT; i++)	//Filling the array with prime numbers as per the method proposed by seive of eratosthenes
	if (primes[i])
	    for (j = i; i * j < LIMIT; j++)
		primes[i * j] = 0;

    printf("\nPrime numbers in range 1 to %u are: \n", LIMIT);

    for (i = 2; i < LIMIT; i++)	//Printing the prime numbers in the range from 1 to 100
	if (primes[i])
	    printf("%llu\n", i);

    return 0;
}
