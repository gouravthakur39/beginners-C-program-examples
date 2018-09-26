// Relational operators in c language

#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers a and b respectively\n");
    scanf("%d%d",&a,&b);
    // Greater than operator
    if (a>b)
        printf("a is greater than b\n");
    else
        printf("a is smaller than b\n");

    // Greater than equal to
    if (a>=b)
        printf("a is greater than equal to b\n");
    else
        printf("a is not greater than equal to b\n");

    //Less than
    if (a<b)
        printf("a is less than b\n");
    else
        printf("a is greater than b\n");

    //Lesser than equal to
    if (a<=b)
        printf("a is less than equal to b\n");
    else
        printf("a is greater than equal to b\n");

    //equal to
    if (a==b)
        printf("a is equal to b\n");
    else
        printf("a is not equal to b\n");

    //not equal to
    if (a!=b)
        printf("a is not equal to b\n");
    else
        printf("a is equal to b\n");

    return 0;

}
