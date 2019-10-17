#include <stdio.h>

int naiveModInv(int x, int y)
{
	// If there is an immediate value reduction
	x %= y; 

	for(int i = 1; i < y; i++)
		if((x * i) % y == 1)
			return i;
}

int main()
{
	printf("Enter a and m: ");
	int a, m;
	scanf("%d%d", &a, &m);
	
	int ans = naiveModInv(a, m);
	printf("%d\n", ans);	
	
	return 0;
}
