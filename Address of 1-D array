#include<stdio.h>
int main()
{
	int a[100],i,n,*add;
	printf("enter the size");
	scanf("%d",&n);
	printf("enter the no");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		add=(a+(i*sizeof(int)));
		printf("%u\n",add);
	}
}
