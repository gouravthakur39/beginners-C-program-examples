//To check whether the given number is Armstrong number or not
//Armstrong number: An n -digit number equal to the sum of the nth powers of its digits.
//Example: (1^3) + (5^3) + (3^3)= 153

#include<stdio.h>
#include<math.h>

  void main() {
    int number, sum = 0, rem = 0, nthPower = 0, digits = 0, temp;
    printf("Enter a number");
    scanf("%d", & number);
    temp = number;
    //to calculate the number of digits in the number
    while (number != 0) {
      number = number / 10;
      digits++;
    }
    number = temp;
    //to get the nth power of each digit and add it to the sum
    while (number != 0) {
      rem = number % 10;
      nthPower = pow(rem, digits);
      sum = sum + nthPower;
      number = number / 10;
    }
    //to check if obtained sum is equal to the original number
    if (sum == temp)
      printf("The given number is an Armstrong number");
    else
      printf("The given number is not an Armstrong number");
  }
