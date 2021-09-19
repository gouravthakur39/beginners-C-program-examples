#include <stdio.h>

int main(void)
{
    float agp, b, da, gs;
    printf("Enter the Basic Salary : \n");
    scanf("%f", &b);
    printf("Enter the AGP : \n");
    scanf("%f", &agp);
    printf("Enter the DA in Percentage : \n");
    scanf("%f", &da);
    gs = (b + agp) * (1.0 + (da / 100.0)); // assuming formula is correct
    printf("Gross Salary is %f\n", gs);

    return 0;
}
