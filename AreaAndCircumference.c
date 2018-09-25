// To calculate Area and Circumference of a circle

#include<stdio.h>
int main()
{
    float r, a ,c;
    printf("enter radius :\n");
    scanf("%f", &r);
    a = 3.14*r*r;
    c = 2*3.14*r;
    printf("Area = %f\n circumference = %f\n",a,c);
    return 0;
}
