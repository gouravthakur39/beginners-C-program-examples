// Program to find employee grade
// Given TA : 5% , DA : 7.5% , HRA : 10%

#include<stdio.h>
int main(){
    float BaseSalary, TA, DA, HRA, GrossSalary;

    printf("Enter basic salary of employee\n");
    scanf("%f", &BaseSalary);

    TA  = 0.05 * BaseSalary;
    DA  = 0.075 * BaseSalary;
    HRA = 0.1 * BaseSalary;
    GrossSalary = BaseSalary + TA + DA + HRA;

    if (GrossSalary >= 100000)
        printf("A grade employee");
    else if (GrossSalary >= 75000 && GrossSalary < 100000)
        printf("B grade employee");
    else if (GrossSalary >=50000 && GrossSalary < 75000)
        printf("C grade employee");
    else if (GrossSalary >= 20000 && GrossSalary < 50000)
        printf("D grade employee");
    else
        printf("E grade employee");
    return 0;
}

