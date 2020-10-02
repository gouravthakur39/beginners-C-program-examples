#include<stdio.h>
#include<conio.h>
struct number
{
int a,b;
int sub,add,mul;
float div;
};

struct number cal(struct number n);

void main()
{
struct number n1;
clrscr();
printf("enter two numbers\n");
scanf("%d%d",&n1.a,&n1.b);
n1=cal(n1);
printf("\nsum=%d\nmult=%d\nsub=%d\ndiv=%f",n1.add,n1.mul,n1.sub,n1.div);
getch();
}
struct number cal(struct number n)
{
n.add=n.a+n.b;                    //n=a+b
n.mul=n.a*n.b;
n.sub=n.a-n.b;
n.div=n.a/n.b;
return n;
}