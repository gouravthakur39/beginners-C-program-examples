//#include<stdio.h>
//#include<conio.h>
//#include<alloc.h>
void main()
{
 int i,*a;
 clrscr();
 a=(int*)malloc(5* sizeof(int));
 for(i=0;i<5;i++)
 {
 printf("\nnumber %d=",i+1);
 scanf("%d",(a+i));    //1
 }
 printf("\nthe numbers and their address are\n\n");
 for(i=0;i<5;i++)
 printf("%d=%u\n\n",*(a+i),(a+i));         //(*a+i)
 getch();
 }