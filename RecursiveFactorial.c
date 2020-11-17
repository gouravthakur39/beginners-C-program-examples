#include <stdio.h>

int factorial(int num) {
  if (num == 1|| num==0)
    return 1;
  else
    return num * factorial(num - 1);
}

int main() {
  int number;

  printf("Enter a number: \n");
  scanf("%d", & number);

  printf("%d! is equal to %d", number, factorial(number));

  return 0;
}
