#include <stdio.h>

#define PI 3.14

int main(void)
{
    float a, r;
    printf("Enter the Radius : ");
    scanf("%f", &r);
    a = PI * r * r;
    printf("Area is %f\n", a);

    return 0;
}
