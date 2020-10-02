// prog on initializing a structure..
#include<stdio.h>
#include<conio.h>
void main()
{
 struct abc
 {
  int x;
  float y;  //struct element or member
  char z[10];
 };

 struct abc m={45,78.34,"india"},m1={56,56.78,"London"};
// struct abc m1={56,56.78,"London"};
 clrscr();
 printf("\n the data is...\n");
 printf("%d\t %f\t %s",m.x,m.y,m.z);
 printf("\n%d\t %f\t %s",m1.x,m1.y,m1.z);

 getch();
}


