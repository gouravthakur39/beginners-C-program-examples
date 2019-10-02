#include <stdio.h>
#include <math.h>
 
int main() 
{
    float principal, rate, time, emi;

    printf("Enter principal amount: ");
    scanf("%f",&principal);
 
    printf("Enter rate of interest: ");
    scanf("%f",&rate);
 
    printf("Enter time in years: ");
    scanf("%f",&time);
 
    rate=rate/(12*100); /*one month interest*/
    time=time*12; /*one month period*/
 
    emi= (principal*rate*pow(1+rate,time))/(pow(1+rate,time)-1);
 
    printf("Monthly EMI is= %f\n",emi);
     
    return 0;
}