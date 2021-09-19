// Sum of natural numbers using recursion

#include <assert.h>
#include <stdio.h>
int sum(int n);
int main(void)
{
    int number, result;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    assert(number >= 0);
    result = sum(number);
    printf("sum = %d\n", result);
    return 0;
}
int sum(int num)
{
    if(num != 0)
        return num + sum(num - 1); // sum() function calls itself
    else
        return num;
}
