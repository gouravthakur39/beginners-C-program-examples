
//Find the missing number in the array of 1 to N

#include<stdio.h>

void main()
{
	int n;
	scanf("%d",&n);
	int a[n-1],i,sum=0;
	for(i=0;i<n-1;i++)
	{
		scanf("%d",&a[i]);
		sum += a[i];
	}
	printf("%d\n",(n*(n+1)/2 - sum));
}