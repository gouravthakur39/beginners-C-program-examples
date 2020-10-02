#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 printf("\n goto function..");
 msg();                                 //calling a function...
 printf("\n out of function..");
 getch();
}
msg()   	  //called function
{
  printf("\n  welcome 2 functions");
}
