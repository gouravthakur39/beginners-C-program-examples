#include <stdio.h>
int fact(int);
int main()
{
    int n;
    unsigned long long factorial = 1;
    //unsigned long long is the same as unsigned long long int. 
    //Its size is platform-dependent, but guaranteed by the C standard (ISO C99) to be at least 64 bits. 

    printf("Enter a positive integer number: ");
    scanf("%d",&n);

   printf("%d\n",fact(n));
    int fact(int n)
    {
        if(n==0)
            return(1);
        else 
            return(n*fact(n-1));
    }
   
    return 0;
}
