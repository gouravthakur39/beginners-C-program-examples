#include<stdio.h>
#include<conio.h>
struct abc
 {
  int x;
  float y;               //x,y,z are members of the struct
  char z;
};
void main()
{
 struct abc m;	//m= structure variables
 clrscr();
 printf("\n enter x,y and z ");
 scanf("%d\n%f\n%c",&m.x,&m.y,&m.z);

 printf("\n the data is...\n");
 printf("%d\t%f\t%c",m.x,m.y,m.z);
 getch();
}

