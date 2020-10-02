#include<stdio.h>
#include<conio.h>
void main()
{
int x=10,y=20;
clrscr();
printf("old val=");
printf("\n x=%d y=%d",x,y);
x=x+y;
y=x-y;
x=x-y;
printf("\n new val=");
printf("\n x=%d y=%d",x,y);
getch();
}