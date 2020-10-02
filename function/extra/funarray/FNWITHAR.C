/*fn with arrays*/
#include<stdio.h>
#include<conio.h>
void main()
{
int marks[5]={50,60,70,80,90};
int total;
clrscr();
total=sum(marks,5);
printf("total=%d",total);
getch();
}
int sum(int s[],int n)
{
int i,sum=0;
for(i=0;i<n;i++)
{
sum=sum+s[i];
}
return sum;
}
