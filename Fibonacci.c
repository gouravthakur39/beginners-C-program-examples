#include <stdio.h>
#include <stdlib.h>
void fibonacci(int num)
{
	if(num == 1 || num == 2)printf("1\n");
	else
	{
		int *fib = (int *)malloc(num*sizeof(int));
		fib[0] = 1;
		fib[1] = 1;
		for(int i = 2 ; i < num ; i++)
			fib[i] = fib[i-1] + fib[i-2];
		for(int i = 0; i < num ; i++)
			printf("%d\n" , fib[i]);
	}
}
void main()
{
	printf("Enter Number of Elements : ");
	int num;
	scanf("%d" , &num);
	fibonacci(num);
}
