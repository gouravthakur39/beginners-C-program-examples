// If ASCII in use , program to find ASCII value

#include <stdio.h>
int main(void)
{
    char c;
    printf("Enter a character: ");

    // Reads character input from the user
    scanf("%c", &c);

    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c is %d\n", c, c);
    return 0;
}
