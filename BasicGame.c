#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include <stdbool.h>
#include <math.h>
#define MAX 10
#define A "P"
#define B "Q"
int getRandom(int low, int high);
int getValidInteger(int low, int high);
unsigned int playerRoll(int low, int high);

void seed(void)
{
	srand(time(NULL));
}
void space(unsigned int size) // create space
{
	printf("     ");
}
char getDisplayType(unsigned int index, unsigned int playerPosition, char playerName) // check the index and return character
{

	if (playerName != '#')
	{
		if (index == playerPosition)
			return playerName;

		if (index == 0)
			return ('C');

		if (index % 3 == 0)
			if (index % 5 == 0)
				if (index % 7 == 0)
					return('G');
				else return ('L');
			else return ('W');

		if (index % 5 == 0)
			if (index % 7 == 0)
				return('G');
			else return ('L');

		if (index % 7 == 0) {
			return('G');
		}
		else return (' ');
	}

	if (playerName == '#')
	{

		if (index == 0)
			return ('C');

		if (index % 3 == 0) {
			if (index % 5 == 0) {
				if (index % 7 == 0) {
					return('G');
				}
				else return ('L');
			}
			else return ('W');
		}

		if (index % 5 == 0) {
			if (index % 7 == 0) {
				return('G');
			}
			else return ('L');
		}
		if (index % 7 == 0) {
			return('G');
		}
		else
			return (' ');



	}
}
void firstLine(unsigned int size) // create the upper line of the square  for the first and last line
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf(" ___ ");
	}
	printf("\n");
}

void secondLine(unsigned int size, unsigned int i, unsigned int playerPosition, char playerName) //create the inside and return the type for the first line
{
	int x, j;
	for (j = 0; j < size; j++)
	{
		x = j;
		printf("| %c |", getDisplayType(x, playerPosition, playerName));
	}
	printf("\n");
}

void secondLine2nd(unsigned int size, unsigned int i, unsigned int playerPosition, char playerName) { //create the inside and return the type for the last line
	int x, y, z;
	y = 3 * (size - 1);
	printf("| %c |", getDisplayType(y, playerPosition, playerName));
	for (i = 0; i < size - 2; i++)
	{
		z = 2 * (size - 1) + ((size - 2) - i);
		printf("| %c |", getDisplayType(z, playerPosition, playerName));
	}
	x = size + i;
	printf("| %c |", getDisplayType(x, playerPosition, playerName));


	printf("\n");
}


void thirdLine(unsigned int size) // create lower line for the first and last line
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("|___|");
	}
	printf("\n");
}
void upperrow(unsigned int size) // create the upper line for the square of the row
{
	int i;
	printf(" ___");
	for (i = 0; i < size - 2; i++) {
		space(size);
	}
	printf("  ___");
	printf("\n");
}

void lowerrow(unsigned int size) //create the lower line for the square of the row
{
	int i;
	printf("|___|");
	for (i = 0; i < size - 2; i++) {
		space(size);
	}

	printf("|___|");
	printf("\n");
}

void middlerow(unsigned int size, unsigned int i, unsigned int playerPosition, char playerName) //create the inside and return the type for the square of the row
{
	int q, b, p;
	b = i;
	q = 3 * (size - 1) + ((size - 1) - i);
	printf("| %c |", getDisplayType(q, playerPosition, playerName));
	for (b = 0; b < size - 2; b++) {
		space(size);
	}
	p = size - 1 + i;
	printf("| %c |", getDisplayType(p, playerPosition, playerName));
	printf("\n");
}


char getValidCharacter(char a, char b) //make sure the character input is right//
{
	char c, choice;
	do {
		scanf_s("%c", &choice);
		getchar();
		if ((choice != 'p' && choice != 'q' && choice != 'r' && choice != 's'))
		{
			printf("Invalid input, please try again:  ");
		}
	} while (choice != 'p' && choice != 'q' && choice != 'r' && choice != 's');
	return choice;
}

int getValidInteger(int low, int high) //validate the input number//
{
	int a; int choice;
	do {
		a = scanf_s("%d", &choice);
		if (choice <low || choice >high)
		{
			printf("Invalid input, please try again: ");
		}

	} while (choice < low || choice > high);
	return choice;
}

int getRandom(int low, int high) //get a rando number
{
	int a;
	a = rand() % (high - low) + low;

	return a;
}

unsigned int playerRoll(int low, int high) //prompt and output the roll
{
	int a = 1, b, c, d, e, choice;
	do {
		printf("\nyour turn, how many dice will you roll : ");
		scanf_s("%d", &choice);
		if (choice == 1)
		{
			b = getRandom(low, high);
			//printf("b: \n");
			//scanf_s("%d", &b);
			printf("You rolled %d\n", b);
			printf("Advancing %d space\n", b);
			a = 0;
			return b;
		}
		else if (choice == 2)
		{
			c = getRandom(low, high);
			//printf("c: ");
			//scanf_s("%d", &c);
			d = getRandom(low, high);
			//printf("d: ");
			//scanf_s("%d", &d);
			b = c + d;
			printf("You rolled %d %d\n ", c, d);
			printf("Advancing %d space\n", b);
			a = 0;
			return b;
		}
		else if (choice == 3) {
			c = getRandom(low, high);
			d = getRandom(low, high);
			e = getRandom(low, high);
			b = c + d + e;
			printf("You rolled %d %d %d\n ", c, d, e);
			printf("Advancing %d space\n", b);
			a = 0;
			return b;
		}
		else
			printf("Try again,");
	} while (a = 1);
}

void winPrize(int playerPrizes[], unsigned int* prizeCount) //do the winprize function
{
	int i;
	unsigned int prize;
	prize = getRandom(10, 100);
	printf("%d\n", prize);
	if (*prizeCount < MAX)
	{
		playerPrizes[*prizeCount] = prize;
		printf("you won a prize of %d\n", prize);
		*prizeCount = *prizeCount + 1;
	}
	else
		printf("Your inventory is full \n");
}
void winGrandPrize(int playerPrizes[], unsigned int* prizeCount) // do the win grand prize function
{
	int i;
	unsigned int prize;
	prize = getRandom(100, 200);
	printf("%d\n", prize);
	if (*prizeCount < MAX)
	{
		playerPrizes[*prizeCount] = prize;
		printf("you won a grand prize of %d\n", prize);
		*prizeCount = *prizeCount + 1;
	}
	else
		printf("Your inventory is full ");
}
int loseItem(int playerPrizes[], unsigned int *prizeCount) // do the loseitem fuction
{
	int i, j, k, r, ran = 2;

	if (*prizeCount == 0)
	{
		printf("Nothing happened,Move On\n");
	}
	else
	{

		ran = getRandom(0, *prizeCount);
		playerPrizes[ran] = 0;
		*prizeCount = *prizeCount - 1;
		printf("you lost the prize");
			for (i = ran - 1; i < MAX; i++) //arange the array in order
				for (j = i; j < MAX; j++)
					if (playerPrizes[i] == 0)
					{
						k = playerPrizes[i];
						playerPrizes[i] = playerPrizes[j];
						playerPrizes[j] = k;
					}

	}
}


void initPlayer(int *playerScore, int playerPrizes[], unsigned int *prizeCount, char *playerName, int *playerPosition) //do the initplayer function, set everything to 0
{
	int i;
	playerPrizes[MAX] = 0;

	*playerScore = 0;
	printf("playerPrizes: %d\n", playerPrizes[MAX]);
	*prizeCount = 0;
	*playerPosition = 0;
	printf("Enter Player ID:  ");
	scanf_s("%c", playerName);
}




void displayBoard(unsigned int size, unsigned int playerPosition, char playerName) //display the boardgame
{

	int k, size1, loop;
	float loop2, playerPosition1, size2;
	//printf("player name in display board: %c\n", playerName);
	//printf("%d\n", r);
	//printf("%d", playerPosition);
	playerPosition1 = (float)playerPosition;
	size1 = (4 * (size - 1));

	size2 = (float)size1;
	//printf("size2: %.2f\n", size2);
	// printf("playerPo1: %.2f\n", playerPosition1);
	//playerPosition2 = float size;
	//printf("playerPos: %d\n", playerPosition);
	loop2 = playerPosition1 / size2;

	loop = trunc(loop2);


	k = playerPosition - (4 * (size - 1))*loop;

	playerPosition = k;

	{
		int i = 0;
		if (size == 1)
		{
			printf("  ___ \n");
			printf(" | ? | \n");
			printf(" |___|");
			printf("\n");
		}
		else {

			for (i = 0; i < size - 1; i++)
			{

				if (i == 0)
				{
					firstLine(size);
					secondLine(size, i, playerPosition, playerName);
					thirdLine(size);
				}
			}
			for (i = 1; i < size - 1; i++)
			{
				upperrow(size);
				middlerow(size, i, playerPosition, playerName);
				lowerrow(size);
			}
			for (i = size - 2; i < size - 1; i++)
			{
				firstLine(size);
				secondLine2nd(size, i, playerPosition, playerName);
				thirdLine(size);
			}
		}
	}
}

int checkout(int *playerScore, int playerPrizes[], unsigned int* prizeCount) //do the checkout
{
	int i;
	for (i = 0; i < *prizeCount; i++)
		*playerScore += playerPrizes[i];
	*prizeCount = 0;
	printf("You check out for $%d score is now: $%d \n", *playerScore, *playerScore);
	if (*playerScore >= 200)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}


void playGame(unsigned int size, int *playerScore, int playerPrizes[], unsigned int *prizeCount, char  *playerName, int* playerPosition) //play the game
{
	printf("playerName in playgame %c\n", *playerName);
	//printf("%d\n",*prizeCount);
	//printf("%d\n", *playerScore);
	int i, l = 1;
	while (l)
	{
		displayBoard(size, *playerPosition, *playerName);

		printf("Score: %d   inventory (%d items): ", *playerScore, *prizeCount);
		for (i = 0; i < *prizeCount; i++) {
			printf("%d, ", playerPrizes[i]);

		}

		*playerPosition = *playerPosition + playerRoll(1, 6);
		if (*playerPosition >= 4 * (size - 1))
			*playerPosition = *playerPosition - 4 * (size - 1);
		//printf("player position in display %d\n", *playerPosition);
		//printf("display type in play game: %c\n", getDisplayType(*playerPosition, *playerPosition, '#'));
		//displayBoard(boardSize, playerPosition, playerName);
		if (getDisplayType(*playerPosition, *playerPosition, '#') == 'G')
		{
			winGrandPrize(playerPrizes, prizeCount);
		}
		else if (getDisplayType(*playerPosition, *playerPosition, '#') == 'W')
		{

			winPrize(playerPrizes, prizeCount);
		}
		else if (getDisplayType(*playerPosition, *playerPosition, '#') == 'L')
		{

			loseItem(playerPrizes, prizeCount);
		}
		else if (getDisplayType(*playerPosition, *playerPosition, '#') == 'C')
		{


			if (checkout(playerScore, playerPrizes, prizeCount) == 1)
			{
				printf("You Win\n");
				l = 0;
			}
		}
		else
			printf("nothing happens, go again.\n");
	}
}







int main(void)
{
	int i, l = 1;
	char a, choice;
	char c = '#';
	int playerScore;
	int playerPrizes[MAX];
	unsigned int prizeCount;
	char playerName;
	unsigned int size;
	unsigned int playerPosition;
	printf("Welcome to CHECKOUT\n");
	while (l) {
		printf("Main Menu\n");
		printf("p-(p)lay q-(q)uit r-inst(r)uctions s-HI(s)core: \n");
		choice = getValidCharacter('P', 'Q');
		if (choice == 'p') {
			printf("Number of players is 1\n");
			initPlayer(&playerScore, playerPrizes, &prizeCount, &playerName, &playerPosition);

			printf("Enter board size: ");
			scanf_s("%d", &size);

			playGame(size, &playerScore, playerPrizes, &prizeCount, &playerName, &playerPosition);



			getchar();

		}
		if (choice == 's')
		{
			printf("--\n");
			printf("  \\ ");
			printf("_______\n");
			printf("    \\++++++|\n");
			printf("     \\=====|\n");
			printf("     0---  0\n");
			printf("HI SCORE: %d Player Name: %c \n", playerScore, playerName);
		}
		if (choice == 'q')
		{
			printf("dont go, I will miss you :(");
			l = 0;
			getchar();
		}
	}
}
