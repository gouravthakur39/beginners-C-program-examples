/*factorial nos*/
#include<stdio.h>
#include<conio.h>
int facto(int n);
void main()
{
int no,fact;
clrscr();
printf("enter value:");
scanf("%d",&no);
fact=facto(no);   //5
printf("factorial of %d is=%d",no,fact);
getch();
}
int facto(int n)
{
int z=1,i=1;
while(i<=n)
{
  z=z*i;
  i++;
}
return(z);
}