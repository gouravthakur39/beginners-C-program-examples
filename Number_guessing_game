//  Number guessing Game 

#include<stdio.h>
int main()
{
	int secretNumber = 6;
	int guess;
	int guessCount = 0;
	int guessLimit = 5;
	int outOfGuesses = 0;
	
	while(guess != secretNumber && outOfGuesses == 0)
	{
		if(guessCount < guessLimit)
		{
			printf("Enter a number :");
			scanf("%d",&guess);
			guessCount++;
		}
		else
		{
			outOfGuesses = 1;
		}	
	}
	if(outOfGuesses == 1)
	{
		printf("\n Out Of Guesses ");
	}
	else
	{
		printf("\n You won!");
	}
	return 0;
	
}
