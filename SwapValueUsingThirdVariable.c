// Swap two integers using third variable

#include <stdio.h>
int main(void)
{
    int a, b, c;
    printf("Enter two no :\n");
    scanf("%d%d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("After swapping value of a = %d b = %d\n", a, b);
    return 0;
}
