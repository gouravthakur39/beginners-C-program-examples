// Fahrenheit to celcius temp converter

#include <stdio.h>
int main(void)
{
    double c, f;
    printf("Enter temp in fahrenheit :\n");
    scanf("%lf", &f);
    c = (f - 32.0) * 5.0 / 9.0;
    printf("Temp in celcius is : %f\n", c);
    return 0;
}
