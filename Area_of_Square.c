#include<stdio.h>
int main()
{ float area,side,perimeter;
printf("Enter the length of side: ");
scanf("%f",&side);
area=side*side;
perimeter=4*side;
printf("Area is %f",area);
printf("Perimeter is %f", perimeter);
return 0;
}
