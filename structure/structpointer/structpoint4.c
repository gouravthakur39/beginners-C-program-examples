//prog on passing structure variable to a function using pointer..
#include<stdio.h>
#include<conio.h>
void add(struct abc*);
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
 add(&m);
 getch();
}
void add(struct abc *p)
{
   
 printf("\n addition=%d",p->x + p->y);
}

//--------------------------------------------------------------------------------------------------------------
//prog  on struct using pointer...
/*
#include<stdio.h>
#include<conio.h>

void main()

{
 struct abc
 {
  int x;
  float y;
  char z;
 };
 struct abc m,*p;
 clrscr();
 printf("\n enter x,y and z ");
 scanf("%d\n%f\n%c", &m.x,&m.y,&m.z);
 p=&m;
 printf("\n the data is...\n");
 printf("%d\t%f\t%c",p->x,p->y,p->z);
 getch();
}
*/