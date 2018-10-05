#include <stdio.h>

// Swap_ref creates a temporary variable temp and dereffrences the address that was sent to it(this is done to get the actual
// value of the int in the memory space). the dereffrencing allows us to change the actual values.
void swap_ref(int* a, int* b){
 int temp = *a;

 *a = *b;
 *b = temp;
}

// Swap however does not use addresses and reffrences and only alters the ints within it's own scope
void swap(int a, int b)
{
 int temp = a;
 a = b;
 b = temp;
}

int main(void) {
  //Declare 2 int variables that are going to be swapped by reference
  int a = 1;
  int b = 2;
  
  printf("%d\n", a);
  printf("%d\n", b);
  
  //Pass the Address of the Values to the Swap function
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
