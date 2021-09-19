#include <stdio.h>

int main(void)
{
    // A no. is said to be palindrome if the number when reversed equals to the same no.  eg: 121*

    int n, reversedInteger = 0, remainder, originalInteger;
    printf("Enter an integer: ");
    scanf("%d", &n);
    originalInteger = n;

    // reversed integer is stored in variable

    while(n != 0)
    {
        remainder = n % 10;
        reversedInteger = reversedInteger * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignalInteger and reversedInteger are equal

    if(originalInteger == reversedInteger)
        printf("%d is a palindrome.", originalInteger);
    else
        printf("%d is not a palindrome.", originalInteger);
    printf("\n");
    return 0;
}
