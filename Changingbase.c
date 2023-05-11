#include <stdio.h>
#include <math.h>//used because of predefined power function

int main()
{
	long long int n,x,y,b,j=-1,c,d,e,a=0,k=-1,f=0;

	printf("This program converts the no. from one base to another\n");

	printf("enter the no. you want to convert\n");
	scanf("%lld",&n);
	
	printf("enter the base of no.\n");
	scanf("%lld",&x);
	
	printf("enter the base to which you want to convert\n");
	scanf("%lld",&y);
	
	while(n>0)
	{
		b=n%10;
	    n=n/10;	
        j++;	
       	d=b*pow(x,j);
	    a=d+a;//converted the no. to base 10
	}

	while(a>0)
	{
		c=a%y;
	    a=a/y;
	    k++;
	    e=c*pow(10,k);
	    f=e+f;//converted the no. to base user wanted
	}

	printf("%lld\n",f);
	return 0;
}