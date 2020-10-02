#include<stdio.h>
#include<conio.h>
struct number
{
int a,b;
int sub,add,mul;
float div;
}num,*n;

//void cal();
void main()
{
clrscr();
printf("enter two numbers\n");
scanf("%d%d",&num.a,&num.b);
cal(&num);
printf("\nsum=%d\nmult=%d\nsub=%d\ndiv=%f",num.add,num.mul,num.sub,num.div);
getch();
}
cal(struct number *n)
{
n->add=n->a+n->b;
n->mul=n->a*n->b;
n->sub=n->a-n->b;
n->div=n->a/n->b;
}