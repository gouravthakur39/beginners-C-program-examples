#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
int a=2,b=2,i,sq=1;
clrscr();
for(i=1;i<=b;i++)
{
sq=sq*a;
}
printf("\n a=%d",sq);
sq=sqrt(sq);
printf("\n sqroot=%d",sq);
getch();
}
