// Program to find ASCII value
#include <stdio.h>//header files
int main()
{
    char c;
    printf("Enter a character: ");//printing a character 

    // Reads character input from the user
    scanf("%c", &c);//value taken by the user by using scanf 

    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d", c, c);result printing 
    return 0;
}
