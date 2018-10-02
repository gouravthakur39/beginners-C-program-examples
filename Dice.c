//Simulate a diceroll with an adjustable number of sides using the rand() function.

#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int Diceroll(int DiceSides)
{
  srand(time(NULL));
  int n = (DiceSides - 1) + 1; //n in this case is the range of the random int
  int DiceRoll  = 1 + rand() % n;

  return DiceRoll;
}

int main(int argc, char argv)
{
  int DiceSides;
  printf("Enter the number of sides your die has. \n");
  scanf("%d",&DiceSides);

  int Dice = Diceroll(DiceSides);
  printf("you rolled a %d \n",Dice);
  return 0;
}
