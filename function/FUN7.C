//prog on function with arguments and without return value.. using pointers (by ref)
#include<stdio.h>
#include<conio.h>

void add(int*,int*);
void main()
{
 int a,b,*p,*q,r;
 clrscr();
 printf("\n enter a and b..");
 scanf("%d%d",&a,&b);
 p=&a;
 q=&b;
 add(p,q);

 getch();
}
void add(int *x,int *y)
{
  int z;
  z=*x+*y;
  printf("\n addition=%d",z);
}
