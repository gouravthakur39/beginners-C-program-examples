#include<stdio.h>
#include<conio.h>
void main()
{
 union student
 {
  int rn;
  float per;
 };
 union student m;
 clrscr();
 printf("\n enter roll no..");
 scanf("%d",&m.rn);
 printf("\n roll no=%d",m.rn);
 printf("\n enter marks..");
 scanf("%f",&m.per);
 printf("\n marks=%f",m.per);
 getch();
}

