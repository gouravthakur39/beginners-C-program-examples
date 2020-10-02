/*fun with pointer*/
#include<stdio.h>
#include<conio.h>
//void add(int *,int *);
void main()
{
int a,b,*p,*q,result;
clrscr();
printf("\n enter values of a,b");
scanf("%d%d",&a,&b);
p=&a;
q=&b;
result=add(p,q);  //add(&a,&b);        //add(a,b)
printf("\n sum=%d",result);
getch();
}
int add(int *x,int *y)
{
int z;
z=*x+*y;
return(z);
}

