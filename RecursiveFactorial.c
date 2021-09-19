#include <stdio.h>

unsigned factorial(unsigned num)
{
    if(num <= 1)
        return 1;
    else
        return num * factorial(num - 1);
}

int main(void)
{
    unsigned number;

    printf("Type a positive number: ");
    scanf("%u", &number);

    printf("%u! is equal to %u\n", number, factorial(number));

    return 0;
}
