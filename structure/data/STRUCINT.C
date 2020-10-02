//Assigining values to individual data members of a structure.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 struct abc
 {
  int x;
  float y;
  char z[10];
 };
 struct abc a1,a2;
 a1.x=445;
 a1.y=78.34;
 strcpy(a1.z,"abc");

 a2.x=45;
 a2.y=45.78;
 strcpy(a2.z,"xyz");
 clrscr();
 printf("\n the data is...\n");

 printf("\n%d\t %f\t %s",a1.x,a1.y,a1.z);
 printf("\n%d\t %f\t %s",a2.x,a2.y,a2.z);
 getch();
}


