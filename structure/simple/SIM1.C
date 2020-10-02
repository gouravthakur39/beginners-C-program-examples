// prog on initializing a structure..
#include<stdio.h>
#include<conio.h>

void main()
{
 struct abc
 {
  int x;
  float y;
  char z[10];
 };
 struct abc m={45,78.34,"india"};
 clrscr();
 printf("\n the data is...\n");
 printf("%d\t %f\t %s",m.x,m.y,m.z);
 getch();
}


