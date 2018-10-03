// Program to find the digital root of a number in C
// The digital root of a number is the single digit that you get by adding 
// all of the digits of the original number together. If the result of that 
// is multiple digits, you add those digits together, repeating the process 
//until you get a single digit. That digit is the digital root of the original number.

#include <stdio.h>

int main() {
   unsigned int number, temp, droot = 0;
   printf("Enter a positive number: ");
   scanf("%u", &number);
   temp = number;
   while(temp != 0) {
      int digit = temp % 10;
      droot += digit;
      temp /=10;
      if(temp == 0 && droot > 9) {
         temp = droot;
         droot = 0;
      }
   }
   printf("The digital root of %u is %u\n", number, droot);
   return 0;
}
