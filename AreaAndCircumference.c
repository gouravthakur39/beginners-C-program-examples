// To calculate Area and Circumference of a circle

#include<stdio.h>
int main()
{
    float radius, area ,circumference;
    printf("enter radius :\n");
    scanf("%f", &radius);
    area = 3.14*radius*radius;
    circumference = 2*3.14*radius;
    printf("Area = %f\n circumference = %f\n",area,circumference);
    return 0;
}

