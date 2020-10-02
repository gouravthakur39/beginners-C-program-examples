//funtion with parameter passing by address
#include<stdio.h>

int sq(int x);
void main()
{
   int a[10],i,result;
   clrscr();
   printf("enter10 values in an array\n");
   for(i=0;i<10;i++)
   scanf("%d",&a[i]);
   for(i=0;i<10;i++)
   {
    result=sq(a[i]);
    printf("square of %d is %d",a[i],result);
   }
   getch();
}

int sq(int x)
{
return(x*x);
}