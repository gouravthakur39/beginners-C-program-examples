// Swap two integers without using third variable , using bitwise ^

#include <stdio.h>
int main(void)
{
    int a, b;
    printf("Enter two no :\n");
    scanf("%d%d", &a, &b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swapping value of a and b : %d,%d\n", a, b);
    return 0;
}
