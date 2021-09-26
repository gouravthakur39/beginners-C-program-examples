// Finding given number is Odd or Even using Bitwise AND(&) Operator
// Checking the Least Significent Bit, if 0 print Even, otherwise print Odd

#include <stdio.h>

int main(void)
{
    unsigned num, mask = 0x1;

    printf("Enter a number: ");
    scanf("%u", &num);

    num &= mask;

    if(0 == num)
        printf("Even Number\n");
    else
        printf("Odd Number\n");

    return 0;
}
