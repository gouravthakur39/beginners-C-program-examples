#include<stdio.h>
void main()
{
  int age;
  clrscr();
  printf("enter a age\n");
  scanf("%d",&age);
  age>=1&&age<=3?printf("\nno ticket"):age>3&&age<=12?printf("half ticket\n"):
  age>12?printf("full ticket\n"):printf("invalid age\n");
  getch();
}
