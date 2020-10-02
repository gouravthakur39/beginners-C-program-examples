/*square of anyumber using function*/
//#include<stdio.h>
//#include<conio.h>
void main()
{
int a,m;
clrscr();
printf("enter any number:");
scanf("%d",&a);
m=sqr(a);
printf("%d",m);
getch();
}
sqr(int x)
{
int t;
t=x*x;
return(t);
}