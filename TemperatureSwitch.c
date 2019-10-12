#include <stdio.h>

int main()
{
	// The resultant temperatures can be in decimals as well, so we use double
	double c, f, result;
	// We use an integer type data to run the switch statement
	int choice;
	printf("Select your choice: \n");
	printf("1. Celcius to Fahrenheit\n");
	printf("2. Fahrenheit to Celcius\n");
	
	printf("Enter your choice: ");
	scanf("%d", &choice);

	// We compute the temperatures for both the cases here respectively
	switch(choice)
	{
		case 1:
			printf("Enter the temperature in Celcius: ");
			scanf("%lf", &c);
			result = (9 / 5) * c + 32;
			break;
		case 2:
			printf("Enter the temperature in Fahrenheit: ");
			scanf("%lf", &f);
			result = (5 / 9) * (f - 32);
			break;

		// This case gets activated when the user inputs anything othrer than 1 or 2
		default: 
			printf("Invalid case!\n");
	}

	// Printing out the result according to the computation
	printf("The resultant temperature is: %lf", result);
	return 0;
}
