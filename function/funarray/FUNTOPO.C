/*fun to pointer*/
#include<stdio.h>
#include<conio.h>
void add(int,int);
void sub(int,int);
void main()
{
int a,b,result;
void (*ptr)(int,int);
clrscr();
printf("\n enter values of a,b");
scanf("%d%d",&a,&b);

ptr=add;
add(a,b);
ptr=sub;
sub(a,b);
getch();
}

void add(int x,int y)
{
int z;
z=x+y;
printf("z=%d",z);
}

void sub(int x,int y)
{
int z;
z=x-y;
printf("z=%d",z);
}
