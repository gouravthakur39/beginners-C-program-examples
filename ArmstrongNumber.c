//To check whether the given number is Armstrong number or not
//Armstrong number: An n -digit number equal to the sum of the nth powers of its digits.
//Example: (1^3) + (5^3) + (3^3)= 153

#include<stdio.h>
#include<math.h>

  void main() {
    int number, sum = 0, digits = 0, temp;
    printf("Enter a number");
    scanf("%d", & number);
    temp = number;
    //to calculate the number of digits in the number
    digits = log10(number) + 1;
    //to get the nth power of each digit and add it to the sum
    while (temp != 0) {
      sum = sum + pow(temp%10, digits);
      temp = temp / 10;
    }
    //to check if obtained sum is equal to the original number
    if (sum == number)
      printf("The given number is an Armstrong number");
    else
      printf("The given number is not an Armstrong number");
  }
