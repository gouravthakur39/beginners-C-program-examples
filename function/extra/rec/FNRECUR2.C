/*for fibonaci number*/
#include<stdio.h>
#include<conio.h>
int fib(int n);
void main()
{
int result,n;
clrscr();
printf("enter a number\n:");
scanf("%d",&n);
result=fib(n);//5
printf("sum=%d",result);
getch();
}
int fib(int n)   //5
{
if(n==1||n==0)
return 1;
else
return fib(n-1)+fib(n-2); //(5-1)+(5-2)
}