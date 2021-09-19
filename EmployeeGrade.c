// Program to find employee grade
// Given TA : 5% , DA : 7.5% , HRA : 10%

#define TA 0.05
#define DA 0.075
#define HRA 0.1

#include <stdio.h>
int main(void)
{
    float BaseSalary, ta, da, hra, GrossSalary;
    printf("Enter basic salary of employee\n");
    scanf("%f", &BaseSalary);
    ta = TA * BaseSalary;
    da = DA * BaseSalary;
    hra = HRA * BaseSalary;
    GrossSalary = BaseSalary + ta + da + hra;
    if(GrossSalary >= 100000)
        printf("A grade employee");

    else if(GrossSalary >= 75000 && GrossSalary < 100000)
        printf("B grade employee");

    else if(GrossSalary >= 50000 && GrossSalary < 75000)
        printf("C grade employee");

    else if(GrossSalary >= 20000 && GrossSalary < 50000)
        printf("D grade employee");

    else
        printf("E grade employee");
    printf("\n");
    return 0;
}
