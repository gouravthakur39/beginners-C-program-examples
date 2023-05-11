//The & operator is used to get the address.
//But in case of array the name of array itself returns its address.
//In array the elements occupy consecutive address,
//therefore incrementing it by 1 each time would give
//the address of next element.

#include<stdio.h>
int main()
{
	int a[100],i,n,*add;
	
	printf("enter the size: ");
	scanf("%d",&n);
	
	printf("enter the numbers: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		add=a+i;
		//add = &a[i]; would also return the same thing.
		printf("The address of element %d is %u.\n",*add, add);	
		
		//Notice: As size of int is 4-byte the differnce in address
		//of cosecutive elements is 4.
	}
}
