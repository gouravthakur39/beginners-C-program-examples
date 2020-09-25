#include<stdio.h>
int arith(int,int,int*,int*,int*);

int main()
{
    int a=8,b=4,sum,diff,pro;
    arith(a,b,&sum,&diff,&pro);
    printf("A is %d and B is %d.",a,b);
    printf("\nThe sum of two numbers is %d.",sum);
    printf("\nThe difference of two numbers is %d.",diff);
    printf("\nThe product of two numbers is %d.",pro);
    return 0;
}

int arith(int a,int b,int* sum,int* diff,int* pro)
{
    *sum=a+b;
    *diff=a-b;
    *pro=a*b;
}
