// Increment operator

#include <stdio.h>
int main(void)
{
    int a = 5, b, c;
    b = a++;
    c = ++a;
    printf("Value of b = %d\nValue of c = %d\n", b, c);
    return 0;
}
