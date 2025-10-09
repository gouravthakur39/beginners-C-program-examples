#include<stdio.h>
#define PI 3.14
int main()
{ float area, r, circumference;
printf("Enter the Radius : ");
scanf("%f",&r);
area=PI*r*r;
circumference=2*PI*r;
printf("Area is %f",area);
printf("Circumference is %f", circumference);
return 0;
}

