#include<stdio.h>
void main()
{
    int a[5]={1,2,3,4,5};
    int *p=a,*q=a;
    printf("The value of *p++ is %d",*p++);
    printf("\nThe value of (*q)++ is %d",(*q)++);
}
