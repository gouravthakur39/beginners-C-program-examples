//Program to calculate simple interest


#include<stdio.h>
int main()
{
    float PrincipleAmount,Rate,Time, SimpleInterest;
    printf("Enter Principal Amount, Rate of interest and Time Respectively\n");
    scanf("%f%f%f", &PrincipleAmount, &Rate, &Time);
    SimpleInterest = (PrincipleAmount * Rate * Time)/ 100;//formula  of simple interest 
    printf("Simple Interest is :%f",SimpleInterest);//the value to display simple interest 
    return 0;

}
