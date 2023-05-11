#include<stdio.h>
void main()
{ float agp,b,da,gs;
printf("Enter the Basic Salary : \n");
scanf("%f",&b);
printf("Enter the AGP : \n");
scanf("%f",&agp);
printf("Enter the DA in Percentage : \n");
scanf("%f",&da);
gs=(b+agp)*(1+(da/100));
printf("Gross Salary is %f",gs);
}
