#include <stdio.h>
#include <conio.h>
int mul(int a, int b, int c)
 {
  return a*b*c;
}
void main()
 {

  int (*fun)(int, int, int);
   clrscr();
  fun = mul;
  printf("The product of three numbers is:%d",fun(2, 3, 4));
  getch();
}