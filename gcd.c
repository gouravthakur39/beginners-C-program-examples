#include <stdio.h>
#include <stdlib.h>

long long get_gcd_recursive(long long a, long long b)
{
	if (a == 0) {
		return b;
	} else if (b == 0) {
		return a;
	}

	/* Swap the two numbers */
	if (b > a) {
		a = a - b;
		b = a + b;
		a = b - a;
	}

	long long remainder = a % b;
	if (remainder == 0) {
		return b;
	}

	return get_gcd_recursive(b, remainder);
}

int main()
{
	long long a = 0;
	long long b = 0;
	scanf("%lld", &a);
	scanf("%lld", &b);	
	printf("%lld", get_gcd_recursive(a, b));
}