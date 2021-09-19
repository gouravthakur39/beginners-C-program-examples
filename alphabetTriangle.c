#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA

*/
#define MAX 5

int main(void)
{

    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *cp = &alphabet[0];
    int i, j, k, m;

    assert(MAX <= strlen(alphabet));

    for(i = 1; i <= MAX; i++)
    {
        for(j = MAX; j >= i; j--)
            printf(" ");
        for(k = 1; k <= i; k++)
            printf("%c", *(cp++));
        cp--;
        for(m = 1; m < i; m++)
            printf("%c", *(--cp));
        printf("\n");
        cp = alphabet;
    }
    return 0;
}
