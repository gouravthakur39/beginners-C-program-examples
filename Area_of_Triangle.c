#include <stdio.h>

int main(void)
{
    float a, b, h;
    printf("Enter the base : ");
    scanf("%f", &b);
    printf("Enter the height : ");
    scanf("%f", &h);
    a = 0.5 * b * h;
    printf("Area is %f\n", a);

    return 0;
}
