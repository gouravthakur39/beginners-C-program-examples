#include <stdio.h>

int main(void)
{
    int n, i, sum = 0;
    printf("enter n\n");
    scanf("%d", &n);
    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum = sum + i;
    }
    if(n == sum)
        printf("Entered no. is a perfect no.\n");
    else
        printf("Entered no. is not a perfect no.\n");

    return 0;
}
