//Program to swap two integers
#include <stdio.h>
int main()
{
	int num1, num2;
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);

	printf("The numbers are: %d and %d", &num1, &num2);
	
	int temp;
	temp=num1;
	num1=num2;
	num2=temp;

	printf("The numbers have been swapped with new positions: %d and %d", &num1, &num2);

	return 0;
}
