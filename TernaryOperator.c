// Largest number among 3 numbers using ternary operator

#include <stdio.h>
int main(void)
{
    double a, b, c, large;
    printf("Enter any 3 numbers\n");
    scanf("%lf%lf%lf", &a, &b, &c);
    large = a > b ? (a > c ? a : c) : (b > c ? b : c);
    printf("The largest no is :%f\n", large);
    return 0;
}
