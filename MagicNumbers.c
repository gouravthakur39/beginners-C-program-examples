//C program to check if a number is magic number or not
//Magic Number:A number is said to be a magic number 
//if the product of the sum and the reverse number of the sum is the given number then the number is the magic number.
//Ex:1729 is a magic number 
//Code:

#include <stdio.h>
  /* sum of digits of a number */
int sumOfDigits(int num) {
	int sum = 0;
        while (num > 0) {
                sum = sum + (num % 10);
                num = num / 10;
        }
        return sum;
  }
 
  /* returns reverse of a given number */
  int reverse(int num) {
        int rev = 0;
        while (num > 0) {
                rev = (rev * 10) + (num % 10);
                num = num / 10;
        }
        return rev;
  }
 
int main () {
        int num, sum, rev;
 
        printf("Enter the value for a number:");
        scanf("%d", &num);
 
        /* find sum of digits by calling function */
        sum = sumOfDigits(num);
 
        
         //if the value is single digit, then
         //the value and its reverse are same         
        if (sum < 10) {
                if ((sum * sum) == num) {
                        printf("%d is a magic number\n", num);
                } else {
                        printf("%d is not a magic number\n", num);
                }
                return 0;
        }
 
        /* reverse of the given number */
        rev = reverse(sum);//calling reverse function
 
        /* printing the outputs */
        if ((sum * rev) == num) {
                printf("%d is a magic number\n", num);
        } else {
                printf("%d is not a magic number\n", num);
        }
 
        return 0;
}
