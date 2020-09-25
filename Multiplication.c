#include<stdio.h>
int main()
{
    int a=5,b=5;
    int *x=&a,*y=&b;
    printf("The Multiplication of %d and %d is %d.",*x,*y,(*x)*(*y));
    return 0;
}
