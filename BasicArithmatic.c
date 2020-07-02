// A simple arithmetic operation on two integers

#include<stdio.h>

int main() {
   int number1, number2, addition, subtraction, multiplication, division, modulo;
   printf("Enter two numbers :\n");
   scanf("%d%d", & number1, & number2);
   addition = number1 + number2;
   subtraction = number1 - number2;
   multiplication = number1 * number2;
   division = number1 / number2;
   modulo = number1 % number2;
   printf("Addition of number 1 and number 2 : %d\n", addition);
   printf("Subtraction of number 1 and number 2 : %d\n", subtraction);
   printf("Multiplication of number 1 and number 2 : %d\n", multiplication);
   printf("Division of number 1 and number 2 : %d\n", division);
   printf("Modulo of number 1 and number 2 : %d\n", modulo);
   return 0;

}
