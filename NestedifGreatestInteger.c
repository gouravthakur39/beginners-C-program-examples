// Greatest number using nested if

#include <stdio.h>
int main(void)
{
    int a, b, c;
    printf("enter three integer number\n");
    scanf("%d%d%d", &a, &b, &c);
    if(a > b)
        if(a > c)
            printf("a is greatest");

        else
            printf("c is greatest");

    else if(b > c)
        printf("b is greatest");

    else
        printf("c is greatest");
    printf("\n");
    return 0;
}
