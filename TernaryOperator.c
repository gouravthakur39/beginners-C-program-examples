//Largest number among 3 numbers using ternary operator

#include<stdio.h>
int main()
{
    float a,b,c,large;
    printf("Enter any 3 numbers\n");
    scanf("%f%f%f",&a,&b,&c);
    large = a>b? (a>c?a:c): (b>c?b:c);
    printf("The larger no is :%f\n", large);
    return 0;

}
