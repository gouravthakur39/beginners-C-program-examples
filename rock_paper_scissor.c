#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    char m, n;
    int x = rand() % 2 + 1;
    if (x == 1)
    {
        n = 'r';
    }
    if (x == 2)
    {
        n = 'p';
    }
    if (x == 3)
    {
        n = 's';
    }
    printf("**********************************************************************************************************************\n");
    printf("**********************************************************************************************************************\n");
    printf("**********************************************************************************************************************\n");

    printf("                                      ROCK PAPER SCISSOR\n");
    printf("'r' for rock\n");
    printf("'p' for paper\n");
    printf("'s' for scissor\n");
    printf("type your choice now\n");
    scanf("%c", &m);
    if (m == n)
    {
        printf("DRAW!\n");
    }
    if ((m == 'r' && n == 's') || (m == 'p' && n == 'r') || (m == 's' && n == 'p'))
    {
        printf("you won!!!\n");
    }
    if ((n == 'r' && m == 's') || (n == 'p' && m == 'r') || (n == 's' && m == 'p'))
    {
        printf("you loose!!!\n");
        printf("computer generate %c\n", n);
    }

    return 0;
}