#include <stdio.h>
#include <stdlib.h>

long get_gcd_euclidian(long d1, long d2)
{
	/* swap the numbers if d2 is greater than d1 */
	if (d2 > d1) {
		d1 = d1 - d2;
		d2 = d1 + d2;
		d1 = d2 - d1;
	}

	if (d2 == 0) {
		return d1;
	}
	
	long rem = d1 % d2;

	return get_gcd_euclidian(d2, rem);
}

long get_lcm_euclidian(long val1, long val2)
{
	if (val1 == 0 || val2 == 0) {
		return 0;
	}

	long prod = (long) (val1*val2);
	long gcd = get_gcd_euclidian(val1, val2);

	return (prod/gcd);
}

int main(int argc, char **argv)
{
	long ip1 = 0;
	long ip2 = 0;
	scanf("%ld %ld", &ip1, &ip2);
	printf("%ld", get_lcm_euclidian(ip1, ip2));

	return 0;
}