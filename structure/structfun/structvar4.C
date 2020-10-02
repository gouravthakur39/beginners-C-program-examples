//prog on passing structure variable to a function...
#include<stdio.h>
#include<conio.h>
//void add(struct abc);
struct abc
 {
  int x;
  int y;
 };
struct abc m;
void main()
{

 clrscr();
 printf("\n enter x:");
 scanf("%d",&m.x);
 printf("\n enter y:");
 scanf("%d",&m.y);
 add(m);
 getch();
}
 add(struct abc p)
{
 printf("\n addition=%d",p.x+p.y);
}

