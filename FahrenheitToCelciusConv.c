// Fahrenheit to celcius temp converter

#include<stdio.h>
int main()
{
        float c, f;
        printf("Enter temp in fahrenheit :\n");
        scanf("%f", &f);
        c = (f-32)*5/9;
        printf("Temp in celcius is : %f",c);

}
