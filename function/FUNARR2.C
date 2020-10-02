//With argument and with return value using arrays.
#include<stdio.h>

int sq(int n);
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
   printf("%d\n",result);
   }
   getch();
}
int sq(int n)
{
return n*n;
}