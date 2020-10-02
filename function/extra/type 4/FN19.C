/*findout factorial number*/
#include<stdio.h>
#include<conio.h>

void main()
{
int a,f;
clrscr();
printf("enter any no:");
scanf("%d",&a);
f=fact(a);
printf("%d",f);
getch();
}
fact(int x)
{
int i,m=1;
for(i=1;i<=x;i++)
m=m*i;
return(m);
}