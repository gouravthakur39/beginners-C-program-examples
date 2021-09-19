// Program to check type of input character

#include <ctype.h>
#include <stdio.h>
int main(void)
{
    char ch;
    printf("Enter a character\n");
    scanf("%c", &ch);
    if(isalpha(ch))
        printf("Entered character is an alphabet");

    else if(isdigit(ch))
        printf("Entered character is a digit");

    else
        printf("Entered character is a special symbol");
    printf("\n");
    return 0;
}
