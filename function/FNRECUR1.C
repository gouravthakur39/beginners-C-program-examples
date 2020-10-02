/*recursion function*/
#include<stdio.h>
#include<conio.h>
//int fact(int n);
void main()
{
int facto n;
clrscr();
printf("enter a number\n:");
scanf("%d",&n);
facto=fact(n);
printf("fact=%d",facto);
getch();
}
int fact(int n)
{
if(n!=1)
return n*fact(n-1);
else
return 1;
}