#include<stdio.h>
#include <assert.h>

int main(void)
{ 
	int a,b,c;
	printf("Enter two Numbers : ");
	scanf("%d %d",&a,&b);
	assert(b !=0 );
	c=a/b;
	printf("Division is %d\n",c);
	
	return 0;
}
