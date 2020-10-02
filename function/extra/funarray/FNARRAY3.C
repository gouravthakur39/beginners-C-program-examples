/*fn with array/
/*sqroot*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
float sqroot(float n);
void main()
{
float a[5],i,result;
clrscr();
printf("enter 5 values in an array\n:");
for(i=0;i<5;i++)
scanf("%f",&a[i]);
for(i=0;i<5;i++)
{
result=sqroot(a[i]);
printf("sqroot of %f=%f\n",a[i],result);
}
getch();
}
float sqroot(float n)
{
return sqrt(n);            //sqrt is maths fun defined in math.h
}