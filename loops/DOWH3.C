//program to find the sum of digits of a number using do while loop

#include<stdio.h>
#include<conio.h>
void main()
{
int number,digits,sum;
clrscr();
digits=sum=0;
printf("Enter any no:");
scanf("%d",&number);
do
{
sum=sum+number%10;
number=number/10;
//digits++;
}while(number>0);
printf("  sum = %d\n",sum);
getch();
}
