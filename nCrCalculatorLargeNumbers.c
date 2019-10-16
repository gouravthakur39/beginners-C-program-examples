#include <stdio.h>
#define m 1000000007
#include <math.h>

// This function calcualtes the large powers with O(log(n))
long fastexp(long x, long y)
{
	// In the form of pow(x, y) % m
	if(y == 0)
		return 1;
	else if (y == 1)
		return x;
	else
	{
		long ans = fastexp(x, y/2);
		if(y % 2 == 0)
			return (ans % m * ans % m) % m;
		else
			return ((ans % m * ans % m) % m * x % m) % m;
	}
}

long fact[2000001] = {1};

int main()
{
	// FACTORIAL CALCULATION
	// Using (a * b) % m = (a % m * b % m) % m
	for(int i = 1; i < 2000001; i++)
		fact[i] = ((fact[i-1] % m) * (i % m)) % m;

	// Number of test cases
	int T;
	long n, r, ans;
	printf("Enter the number of test cases: ");
	scanf("%d", &T);
	while(T--)
	{
		printf("Enter the two numbers in the form of xCy: ");
		scanf("%ld%ld", &n, &r);

		// Formula used: (n)!/ (r! * (n-r)!)
		// = (n+r)! * pow((r! * (n-r)!), -1) 
		// Using FERMAT's LITTLE THEOREM (Google it!) 
		// = (fact[n]%m * pow((r! * (n-r)!), m - 2) % m) % m
		// = (fact[n]%m * fastexp((fact[r] * fact[n-r])%m, m - 2)%m)%m

		ans = (fact[n]%m * fastexp((fact[r]%m * fact[n-r]%m) % m, m - 2) % m) % m;
		printf("%ld\n", ans);
	}
	return 0;
}
