#include <stdio.h>

int main(void)
{
    int a, b, t;
    printf("Enter two Numbers : ");
    scanf("%d %d", &a, &b);
    t = b;
    b = a;
    a = t;
    printf("Swap is %d %d\n", a, b);
    return 0;
}
