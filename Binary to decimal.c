#include<stdio.h>
#include<math.h>
//using namespace std;
int main()
{
	long long int a;
	printf("enter the no in binary\n");
	scanf("%d", &a);
	int b=0,j=0;
	int c;
	while(a!=0)
	{
		c=a%10; //taking last digit of a
		b=b+c*(int)pow(2,j);
		j++;
		a=a/10;
	}
	printf("%d\n", b);
}
