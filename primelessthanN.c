#include<stdio.h>
int factor(int x)
{
	int j=0;
	for(int i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			j++;
		}
	}
		if(j==2)
		{
			return 1;
		}
		else
		{
			return 0;
		}
}
int main()
{
	int n;
	scanf("%d",&n);
	for (int i=1;i<n;i++)
	{
		if(factor(i)==1)
			printf("%d ",i);
	}
	return 0;
}
