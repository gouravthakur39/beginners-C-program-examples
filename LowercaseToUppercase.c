// Lowercase character to Uppercase conversion

#include<stdio.h>
int main ()
{
    char ch;
    int no;
    printf("Enter a lowercase character :\n");
    scanf("%c", &ch);
    no = ch-32;
    printf("Letter in capital  : %c", no);
    return 0;


}
