#include <stdio.h>

void swap_ref(int* a, int* b)
{
 int temp = *a;
 *a = *b;
 *b = temp;
}

void swap(int a, int b)
{
 int temp = a;
 a = b;
 b = temp;
}

int main(void) {
  int a = 1;
  int b = 2;
  
  printf("%d\n", a);
  printf("%d\n", b);
   
  swap_ref(&a, &b);
  
  printf("%d\n", a);
  printf("%d\n", b);
  
  int c = 5;
  int d = 10;
  printf("%d\n", c);
  printf("%d\n", d);
   
  swap(c, d);
  
  printf("%d\n", c);
  printf("%d\n", d);
}
