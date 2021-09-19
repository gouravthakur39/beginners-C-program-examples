// Program to input a character and check whether it is vowel or consonant using switch case
#include <assert.h>
#include <ctype.h>
#include <stdio.h>
int main(void)
{
    char ch;
    printf("Enter a character\n");
    scanf("%c", &ch);
    assert(isalpha(ch));
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Entered character is a vowel\n");
        break;
    default:
        printf("Entered character is a consonant\n");
    }
    return 0;
}
