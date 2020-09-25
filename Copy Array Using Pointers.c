#include<stdio.h>
void copy(int*,int*,int);
void main()
{
    int a[5]={1,2,3,4,5},b[5];
    copy(a,b,5);
}
void copy(int a[5],int b[5],int size)
{
    int i;
    int *p=a;
    for(i=0;i<size;i++)
    {
        b[i]=*p+i;
    }
    printf("The newly created array is : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",b[i]);
    }
}
