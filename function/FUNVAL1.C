#include<stdio.h>
#include<conio.h>

void exchange(int,int);
void main()
{
int a,b;
clrscr();
printf("enter two values\n");
scanf("%d%d",&a,&b);
printf("\nin main");
printf("\na=%d  b=%d",a,b);
exchange(a,b);
getch();
}

void exchange(int p,int q)
{
int t;
t=p;
p=q;
q=t;
printf("\nin function");
printf("\n a=%d b=%d",p,q);
}
