#include<stdio.h>
#include<math.h>
void move(int n,char source,char dest,char spare)
{
	if(n==1)
		printf("Move from %c to %c\n",source,dest);	
	else
	{
		move(n-1,source,spare,dest);
		move(1,source,dest,spare);
		move(n-1,spare,dest,source);
	}
}

int main()
{
	int n;
	printf("Enter the no. of rings:");
	scanf("%d",&n);
	move(n,'A','C','B');
        printf("total number of moves are:%d\n",(int)pow(2,n)-1);
	return 0;
}
