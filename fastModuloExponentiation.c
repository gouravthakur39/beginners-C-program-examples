#include <stdio.h>

// Declaring a golbal variable as its going to be used again and again in the function
long long m;

long long modder(long long x, long long y)
{
	// x to the power zero is 1
	if(y == 0)
		return 1;
	// x to the power one is x
	else if(y == 1)
		return x;
		
	// We now split the problem in two parts
	// solve one of them and use its resultant for the second part
	else
	{
		long long ans = modder(x, y/2);
		// If the power is not divisible by 2, we simply multiply by x
		// Using the concept: (a * b) % m = (a % m * b % m) % m
		// This concept is used repeatedly when y % 2 != 0

		if(y % 2 == 0)
			return (ans % m) * (ans % m);
		else
			return (((ans % m) * (ans % m)) % m * (x % m)) % m; 
	}
}

int main()
{
	printf("Enter three numbers, x to the power of y modulo m: ");
	long long x, y, result;
	scanf("%lld%lld%lld", &x, &y, &m);

	// We don't need to send m here now
	result = modder(x, y);
	
	printf("The resultant is: %lld\n", result);	
	return 0;
}
