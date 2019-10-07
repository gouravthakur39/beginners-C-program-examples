
//Swap two integers using a third variable


#include <stdio.h>
int main()
{
        int num1, num2, var;
        printf("Enter two numbers to be swapped : ");
        scanf(" %d %d", &num1, &num2);
        var = num1;
        num1 = num2;
        num2 = var;
        printf("Numbers after swapping are %d and %d.\n", num1, num2);
        return 0;
}




