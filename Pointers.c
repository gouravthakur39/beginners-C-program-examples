// Handling of pointers in C program
// Pointers in C language is a variable that stores/points the address of another variable.
// A Pointer in C is used to allocate memory dynamically i.e. at run time.

#include <stdio.h>
  int main() {
    int * pc; // * is used to make pointer
    int c;

    c = 22;
    printf("Address of c: %u\n", & c);
    printf("Value of c: %d\n\n", c);

    pc = & c;
    printf("Address of pointer pc: %u\n", pc);
    printf("Content of pointer pc: %d\n\n", * pc);

    c = 11;
    printf("Address of pointer pc: %u\n", pc);
    printf("Content of pointer pc: %d\n\n", * pc);

    * pc = 2;
    printf("Address of c: %u\n", & c);
    printf("Value of c: %d\n\n", c);
    return 0;
  }
