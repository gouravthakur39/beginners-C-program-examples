// Program to input an integer number and check whether it is
// even or odd and positive or negative using goto  statements
// usage of goto is not encouraged in C

#include <stdio.h>
int main(void)
{
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    if(n % 2 == 0 && n > 0)
        goto a;

    else if(n % 2 != 0 && n < 0)
        goto b;

    else if(n % 2 == 0 && n < 0)
        goto c;

    else if(n % 2 != 0 && n > 0)
        goto d;

    else
        goto e;
a:
    printf("number is even and positive\n");
    goto stop;
b:
    printf("number is odd and negative\n");
    goto stop;
c:
    printf("number is even and negative\n");
    goto stop;
d:
    printf("number is odd and positive\n");
    goto stop;
e:
    printf("special number\n");
    goto stop;
stop:
    return 0;
}
