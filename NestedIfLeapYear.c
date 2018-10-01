// Leap year check using nested if statements

#include<stdio.h>
int main()
{
    int y;
    printf("Enter a year\n");
    scanf("%d", &y);
    if (y%100!= 0)
    if (y% 4 == 0)
        printf("%d is a leap year\n", y);
    else
        printf("%d is not a leap year\n", y);
    if (y%400==0)
        printf("%d is a leap year stat1cond1\n", y);
    else
        printf("%d is not a leap year stat2cond2\n", y);
    return 0;

}
