/*with argument with return type*/
#include<stdio.h>
#include<conio.h>

void main()
{
int x=100,y=20;
int z;
clrscr();
z=add(x,y);
printf("\n z=%d",z);
z=sub(x,y);
printf("\n z=%d",z);
z=mult(x,y);
printf("\n z=%d",z);
z=div(x,y);
printf("\n z=%d",z);
getch();
}
int add(int a,int b)
{
return(a+b);
}

int sub(int a,int b)
{
return(a-b);
}
int mult(int a,int b)
{
return(a*b);
}
int div(int a,int b)
{
return(a/b);
}

