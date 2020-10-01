#include<stdio.h>
#include <stdbool.h> 
#include <string.h>

void main(){
    int num, i, j,check;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("Prime numbers are:\n");
    
    bool prime[num+1]; 
    memset(prime, true, (num+1)*sizeof(prime[0])); 
  
    for (int p=2; p*p<=num; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p greater than or  
            // equal to the square of it 
            // numbers which are multiple of p and are 
            // less than p^2 are already been marked.  
            for (int i=p*p; i<=num; i += p) 
                prime[i] = false; 
        } 
    } 
  
    // Print all prime numbers 
    for (int p=2; p<=num; p++) 
       if (prime[p]) 
          printf("%d ",p);
}