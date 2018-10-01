// Program to input a character and check whether it is vowel or consonant using switch case
#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character\n");
    scanf("%c", &ch);
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
        printf("Entered character is a vowel");
        break;
    default:
        printf("Entered character is a consonant");

    }

    return 0;
}
