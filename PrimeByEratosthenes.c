#include <stdio.h>
#include <stdlib.h>
 
#define limit 100 /*size of integers array*/
 
int main(){
    unsigned long long int i,j;
    int *primes;
    int z = 1;
 
    primes = malloc(sizeof(int) * limit);
 
    for (i = 2;i < limit; i++)
        primes[i] = 1;
 
    for (i = 2;i < limit; i++)
        if (primes[i])
            for (j = i;i * j < limit; j++)
                primes[i * j] = 0;
 
    printf("\nPrime numbers in range 1 to 100 are: \n");

    for (i = 2;i < limit; i++)
        if (primes[i])
            printf("%d\n", i);
 
return 0;
}