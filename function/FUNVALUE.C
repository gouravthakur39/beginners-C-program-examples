#include<stdio.h>
void exchange(int a, int b);
void main()
{
   int x,y;
   clrscr();
   printf("enter the values of x,y\n");
   scanf("%d%d",&x,&y);
   exchange(x,y);
   printf("in main\n");
   printf("x=%d y=%d",x,y);
   getch();
}

void exchange(int a, int b)
{
int t;
t=a;
a=b;
b=t;
printf("in function\n");
printf("x=%d y=%d",x,y);
}