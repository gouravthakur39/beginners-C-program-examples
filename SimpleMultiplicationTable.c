#include <assert.h>
#include <stdio.h>

int main(void)
{

    int num, i = 1;

    printf("Enter a number to calculate the multiplication table up to 10:\n");

    scanf("%d", &num);
    assert(num >= 0);
    assert(num <= 9);

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", i, num, num * i);
    }

    return 0;
}
