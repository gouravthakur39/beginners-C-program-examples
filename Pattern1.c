#include <stdio.h>
int main()
{

	/** Program to print the following pattern:
				
				*
				**
				***
				****	
				*****
	**/
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}