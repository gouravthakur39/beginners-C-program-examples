// Convert base10(decimal) values to base2(binary)

#include <stdio.h>

void PrintBits(int power, int num){
    // firstOne is a flag that stops "0" being printed before a "1" is printed
    int firstOne = 0;

    // Conversion loop
    while (power > 0) {
      if (num >= power) {
        firstOne = 1;
        printf("1");
        num %= power;
      } else if (firstOne == 1) {
          printf("0");
      }
      power /= 2;
    }
    printf("\n");
}

int main() {

    int num = 0;
    int power = 1;

    // Getting input
    printf("Please enter a numeric value: ");
    scanf("%d", & num);
    printf("%d represented in binary is: ", num);

    // Determine highest order of magnitude needed for the base2 conversion
    while (power < num) {
      power *= 2;
    }

    // Edge case in event of 0 being entered
    if (num == 0) {
      printf("0\n");
    } else {
      PrintBits(power, num);
    }
    return (0);
}
