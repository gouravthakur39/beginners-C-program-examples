#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
 int i,*a;
 clrscr();
 a=(int*)malloc(5* sizeof(int));
 for(i=0;i<5;i++)
 {
 printf("\nnumber %d=",i+1);
 scanf("%d",(a+i));
 }
 printf("\nthe numbers are\n\n");
 for(i=0;i<5;i++)
 printf("%d\n\n",*(a+i));

 printf("number after deleting\n");
 for(i=5;i>=0;i--)
 {
 free(a+i);
 printf("%d\n\n",*(a+i));
 }
 getch();
 }