#include<stdio.h>
int main()
{
    int a=5;
    float b=10.1;
    double c=10.1;
    int *x=&a;
    float *y=&b;
    double *z=&c;
    printf("The value of int is %d.",*x);
    printf("\nThe value of float is %f.",*y);
    printf("\nThe value of double is %lf.",*z);
    return 0;
}
