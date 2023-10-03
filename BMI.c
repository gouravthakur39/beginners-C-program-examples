#include<stdio.h>
#include<math.h>

/**
 * This is a Body to mass index calculator
 * It is your bodies weight divided by the square of height
 */
int main()
{
	float kg,metres,d,c;

	printf("Enter your weight in KG: ");
	scanf("%f",&kg);
	printf("Enter your height in metres: ");
	scanf("%f",&metres);
	c=metres*metres;
	d=kg/c;

	printf("Your BMI is %.2f\n", d);
	
	return 0;
}
