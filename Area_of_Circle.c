#include<stdio.h>
void main()
{ float a,r;
printf("Enter the Radius : ");
scanf("%f",&r);
if(r>=1)
{
a=3.14*r*r;
printf("Area is %f",a);
}
else
{
printf("sorry");
}
}