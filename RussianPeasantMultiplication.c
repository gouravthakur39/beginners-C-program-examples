/*Russian peasant multiplication is an interesting way to multiply 
numbers that uses a process of halving and doubling. Like standard
 multiplication and division*/


#include<stdio.h>

int main()
{

	long long int a, b, k, l, sum=0, i=0;

// input variables
	printf("ENTER TWO NUMBERS:\n");
	scanf("%lld %lld", &a, &b);
	k=a;
	l=b;


// working of algorithm
	while(a>0)
	{
		if(a%2==1){
			sum = sum + b;
		}
			a = a>>1;
			b = b<<1; 
			i++;
	}


// output
	printf("PRODUCT OF %lld AND %lld IS = %lld \n",k,l,sum);

	return 0;
}