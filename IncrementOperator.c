// Increment operator used

#include<stdio.h>
int main()
{
    int a= 5, b, c;
    b = a++ + ++a;  //Right to left
    c = ++a + a++;  //Right to left

    printf("Value of b = %d\n Value of c = %d\n", b,c);
    return 0;
}

