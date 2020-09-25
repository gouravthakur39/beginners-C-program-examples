#include<stdio.h>
int main()
{
    int a=5,b=6;
    int *x=&a,*y=&b;
    printf("A is %d and B is %d.",*x,*y);
    if(*x>*y)
    {
        printf("\nA is greater with the value of %d",*x);
        return 0;
    }
    else
    {
        printf("B is greater with the value of %d",*y);
        return 0;
    }
}
