#include <stdio.h>

int factorial(int num) {
  if (num == 1)
    return 1;
  else
    return num * factorial(num - 1);
}

int main() {
  int number;

  printf("Type a positive number: ");
  scanf("%d", & number);

  printf("%d! is equal to %d", number, factorial(number));

  return 0;
}
