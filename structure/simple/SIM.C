#include<stdio.h>
#include<conio.h>
struct abc
 {
  int x;
  float y;                  //structures element or members
  char z[10];
 };
void main()
{

 struct abc m1={54,78.34,"pppp"},m={45,78.34,"india"};   //m,m1 are structures varibles
// struct abc m={34,45.6,"pop"};
 clrscr();
 printf("\nx=%d\ty=%f\tz=%s",m.x,m.y,m.z);
 printf("\n\nx=%d\ty=%f\tz=%s",m1.x,m1.y,m1.z);
 getch();
}