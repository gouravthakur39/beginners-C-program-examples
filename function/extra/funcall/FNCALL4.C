//call by value//
#include<stdio.h>
#include<conio.h>
void cal(int a,int b,int s,int u,int m,int d);
void main()
{
int a,b,add,sub,mult,div;
clrscr();
printf("enter two values\n:");
scanf("%d%d",&a,&b);
cal(a,b,add,sub,mult,div);
getch();
}
void cal(int a,int b,int add,int sub,int mult, int div)
{
add=a+b;
sub=a-b;
mult=a*b;
div=a/b;
printf("\n addition=%d",add);
printf("\n subctraction=%d",sub);
printf("\n mult=%d",mult);
printf("\n div=%d",div);
}