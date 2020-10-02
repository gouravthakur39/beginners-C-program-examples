//do-while
#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,n;
clrscr();
printf("enter a number\n");
scanf("%d",&n);
do
{
if(i%2==0)
printf("%d is an even number\n",i);
else
printf("%d is an odd number\n",i);
i++;
}
while(i<=n);
getch();
}
