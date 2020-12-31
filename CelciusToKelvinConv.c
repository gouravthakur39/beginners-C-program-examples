// Celsius to Kelvin converter

#include <stdio.h>

int main(void)
{
    double c, k;
    printf("Enter the desired temperature in Celsius:\n");
    scanf("%lf", &c);
    k = c + 273.15;
    printf("Converted value in Kelvin: %f\n", k);
    return 0;
}
