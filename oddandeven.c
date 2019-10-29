// Program to check if an integer is even or odd

#include <stdio.h>

int main()
{

	int number; //declaring variable
	printf("Enter an integer number\n");
	scanf("%d",&number);//scanning number
	if (number %2 ==0)//if number is even, it's remainder when divided by 2 is 0
	   printf("The number %d is even\n",number);
	else{
	   printf("The number %d is odd\n",number);
	}
}
