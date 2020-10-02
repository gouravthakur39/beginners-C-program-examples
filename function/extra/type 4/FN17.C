/*sum=x+y*/
#include<stdio.h>
#include<conio.h>
sum (int a,int b);
void main()
{
int a,b,s;
clrscr();
printf("enter any two numbers");
scanf("%d%d",&a,&b);
s=sum(a,b);
printf("%d",s);
getch();
}
sum(int x,int y)
{
int t;
t=x+y;
return (t);
}