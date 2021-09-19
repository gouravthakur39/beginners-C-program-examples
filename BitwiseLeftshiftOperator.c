// Bitwise left shift operator

#include <stdio.h>
int main(void)
{
    // usually usigned values are used for bitwise operations
    int a = 7, b = 2, c;
    c = a << b;
    printf("Value of c = %d\n", c);
    return 0;
}
