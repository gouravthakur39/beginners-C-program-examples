// To calculate Area and Circumference of a circle

#include <stdio.h>

#define PI 3.14
int main(void)
{
    float r, a, c;
    printf("enter radius :\n");
    scanf("%f", &r);
    a = PI * r * r;
    c = 2 * PI * r;
    printf("Area = %f\n circumference = %f\n", a, c);
    return 0;
}
