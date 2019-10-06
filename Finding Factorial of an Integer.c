#include<stdio.h>

//Defining a recurcive function to calculate factorial
long double factorial(long double n)
{
	if(n==0)
		return 1;
	else if(n==1)
		return 1;
	else
	return factorial(n-1)*n;
}
int main()
{
	long double n;
	//Taking input from the user
	printf("Enter a non-negative Integer: ");
	scanf("%Lf",&n);
	//Printing the answer
	printf("The factorial of %.0Lf is: %.0Lf\n",n,factorial(n));
	return 0;
}
