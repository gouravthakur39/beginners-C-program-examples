// Swap two integers without using third variable


#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter two no :\n");
    scanf("%d%d",&a,&b);
    a = a^b;
    b = a^b;
    a=  a^b;
    printf("After swapping value of a and b : %d,%d",a,b);
    return 0;
}
