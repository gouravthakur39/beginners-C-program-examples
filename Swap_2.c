#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Enter two Numbers : ");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Swap is %d %d\n", a, b);
    return 0;
}
