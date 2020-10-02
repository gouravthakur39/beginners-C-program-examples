//program to find the reverse of a number & to check whether reverse is equal to the number & also finds the sum of its digit

#include<stdio.h>
#include<conio.h>
void main()
{
int n,num,digit,sum=0,rev=0;
clrscr();
printf("input a number\n");
scanf("%d",&num);
n=num;
do
{
digit=num%10;
sum=sum+digit;
rev=rev*10+digit;
num=num/10;
}while(num!=0);
//printf("sum of the digits of the number=%d\n",sum);
printf("reverse of the number=%d\n",rev);
if(n==rev)
printf("the number is a palindrome\n");
else
printf("the number is not a palindrome\n");

getch();
}





