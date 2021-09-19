#include <stdio.h>

int main(void)
{
    float c, f;
    printf("Enter the Temperature in Celcius : ");
    scanf("%f", &c);
    f = c * (9.0 / 5.0) + 32.0;
    printf("Temperature in Fahernheit is %f\n", f);
    return 0;
}
