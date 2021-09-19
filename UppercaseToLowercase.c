// Uppercase character to lowercase character

#include <assert.h>
#include <ctype.h>
#include <stdio.h>
int main(void)
{
    char a, u;
    printf("Enter Uppercase letter :\n");
    scanf("%c", &a);
    assert(isupper(a));
    u = tolower(a);
    printf("Lowercase is : %c\n", u);
    return 0;
}
