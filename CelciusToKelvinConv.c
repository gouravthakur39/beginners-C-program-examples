// Celsius to Kelvin converter

#include <stdio.h>

int main()
{
	double c, k;
	printf("Enter the desired temperature in Celcius:\n");
	scanf("%c", &c);
	k = c + 273.15;
	printf("Converted value: %f K\n", k);
	return 0;
}
