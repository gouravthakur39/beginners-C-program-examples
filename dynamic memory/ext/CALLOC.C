#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
 int i,*a;
 int num[5];
 clrscr();
 a=(num)calloc(10,sizeof num);
 for(i=0;i<5;i++)
 {
 printf("\nnumber %d=",i+1);
 scanf("%d",(a+i));
 }
 printf("\nthe numbers are\n\n");
 for(i=0;i<5;i++)
 printf("%d\n\n",*(a+i));
 getch();
 }