/*
 * Handling of pointers in a C program
 * A pointer in the C language is an object that stores the address of another
 * object.
 * A pointer in C is used to allocate memory dynamically i.e. at run time.
 */

#include <stdio.h>

int main(void) {
    int * pc; /* the '*' is used to make pointer */
    int c;

    c = 22;
    printf("Address of c: %p\n", (void * ) & c);
    printf("Value of c: %d\n\n", c);

    pc = & c;
    printf("Address of c: %p\n", (void * ) pc);
    printf("Content of c: %d\n\n", * pc);

    c = 11;
    printf("Address of c: %p\n", (void * ) pc);
    printf("Content of c: %d\n\n", * pc);

    * pc = 2;
    printf("Address of c: %p\n", (void * ) & c);
    printf("Value of c: %d\n\n", c);
    return 0;
}
