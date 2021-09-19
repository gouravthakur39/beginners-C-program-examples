#include <math.h>
#include <stdio.h>

int main(void)
{
    double a, b;
    printf("Enter the degree : ");
    scanf("%lf", &a);
    a = (a * 3.14) / 180;
    b = sin(a);
    printf("Sine is %lf", b);
    return 0;
}
