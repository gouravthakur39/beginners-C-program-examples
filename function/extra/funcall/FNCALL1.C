/*exchange a values*/
//call by values
#include<stdio.h>
#include<conio.h>
void exchange(int,int);
void main()
{
int a,b;
clrscr();
printf("enter two values\n");
scanf("%d%d",&a,&b);
printf("\n in main:");
printf("\n a=%d b=%d",a,b);
exchange(a,b);
getch();
}
void exchange(int p,int q)
{
int t;
t=p;          //  t=10
p=q;         //  p=20
q=t;
printf("\n in function");
printf("\n a=%d b=%d",p,q);
}
