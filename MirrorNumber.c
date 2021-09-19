// Program to find if a number is mirror number or not

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int reverse(int num)
{
    int n_digits;
    int rev = 0;
    int snum = num;
    for(n_digits = 0; num != 0; n_digits++)
        num /= 10;

    // printf("n_digits is %d\n",n_digits);
    num = snum;
    for(; n_digits > 0; n_digits--)
    {
        int rem = num % 10;
        rev = rem * pow(10, n_digits) + rev;
        num /= 10;

        // printf("@ %d\n",rev);
    }
    rev /= 10;
    return rev;
}
int main(void)
{
    int num; //, snum;
    // int n_digits;
    int rev;
    printf("Enter a number\n");
    scanf("%d", &num);

    // snum=num;
    rev = reverse(num);
    printf("rev is %d\n", rev);
    if(rev == num) // snum
        printf("Number is mirror\n");

    else
        printf("Not a mirror number\n");
    return 0;
}
