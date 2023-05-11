#include<stdio.h>
#include<string.h>
long long int max=1e6 +5;
int main()
{
	//Defining a string to take input of the number
	char number[max];

	long long int len,i,count=0;

	//Taking the inputin form of a string
	printf("Enter a Number: ");
	scanf("%s",number);

	//Finding the number of digits by calculating the lenght of the string
	len=strlen(number);

	//Checking if the number is a palindrome or not
	for(i=0;i<len/2;i++)
	{
		if(number[i]==number[len-i-1])
				count++;
	}
	if(count==len/2)
		printf("The entered number %s is a palindrome\n",number);
	else
		printf("The entered number %s is not a palindrome\n",number);
	return 0;
}
