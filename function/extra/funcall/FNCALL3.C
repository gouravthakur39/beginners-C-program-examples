/*exchange values*/
#include<stdio.h>
#include<conio.h>

void exchange(int,int);
void main()
{
int a,b;
clrscr();
printf("enter two values");
scanf("%d%d",&a,&b);
printf("\n before function call");
printf("\n a=%d b=%d",a,b);
printf("\n after function call:");
printf("\n a=%d b=%d",a,b);
exchange(a,b);
printf("\n in main");
printf("\n a=%d b=%d",a,b);
getch();
}
void exchange(int p,int q)
{
int t;
t=p;
p=q;
q=t;
printf("\n in function:");
printf("\n a=%d b=%d",p,q);
}
