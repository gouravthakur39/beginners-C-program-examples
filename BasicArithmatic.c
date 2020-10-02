// A simple arithmetic operation on two integers

#include<stdio.h>

int main() {
   int number1, number2, addition, subtraction, multiplication, division, modulo;
   printf("Enter first : ");
   scanf("%d",&number1);
   printf("Second number : ",&number2);
   scanf("%d",&number2);
   addition = number1 + number2;
   subtraction = number1 - number2;
   multiplication = number1 * number2;
   division = number1 / number2;
   modulo = number1 % number2;
   printf("Addition of %d and %d : %d\n",number1,number2, addition);
   printf("Subtraction of %d and %d : %d\n",number1,number2, subtraction);
   printf("Multiplication of %d and %d : %d\n",number1,number2, multiplication);
   printf("Division of %d and %d : %d\n",number1,number2, division);
   printf("Modulo of %d and %d : %d\n",number1,number2, modulo);
   return 0;

}
