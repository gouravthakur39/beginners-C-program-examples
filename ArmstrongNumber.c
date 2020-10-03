//To check whether the given number is Armstrong number or not
//Armstrong number: An n -digit number equal to the sum of the nth powers of its digits.
//Example: (1^3) + (5^3) + (3^3)= 153

 #include <math.h>
#include <stdio.h>

int main() {
   int num, orgNum, remainder, n = 0;   //orgnumber=orginalnumber
   float result = 0.0;

   printf("Enter an integer: ");
   scanf("%d", &num);

   orgNum = num;

   // store the number of digits of num in n
   for (orgNum = num; orgNum != 0; ++n) {
       originalNum /= 10;
   }

   for (orgNum = num; orgNum != 0; orgNum /= 10) {
       remainder = orgNum % 10;

      // store the sum of the power of individual digits in result
      result += pow(remainder, n);
   }

   // if num is equal to result, the number is an Armstrong number
   if ((int)result == num)
    printf("%d is an Armstrong number.", num);
   else
    printf("%d is not an Armstrong number.", num);
   return 0;
}
