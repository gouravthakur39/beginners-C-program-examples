/*fn with arrays*/
#include<stdio.h>
#include<conio.h>
//int sq(int n);
void main()
{
int a[5],i,result;
clrscr();
printf("enter 5 values in an array\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
result=sq(a[i]);      //sq(a,b); sq(&a,&b);
printf("\n square of %d=%d",a[i],result);
}
getch();
}
int sq(int n)
{
return n*n;
}

