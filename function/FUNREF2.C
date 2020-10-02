//call by reference.
#include<stdio.h>
#include<conio.h>

//void exchange(int *p, int *q);
void main()
{
int a,b;
clrscr();
printf("enter two values\n");
scanf("%d%d",&a,&b);
printf("\nin main\n");
printf("a=%d  b=%d",a,b);
exchange(&a,&b);
getch();
}

exchange(int *p, int *q)
{
int t;
t=*p;
*p=*q;
*q=t;
printf("\nin function");
printf("\na=%d b=%d",*p,*q);
}
