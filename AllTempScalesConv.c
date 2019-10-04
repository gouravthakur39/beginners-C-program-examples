#include <stdio.h>
#include <stdlib.h>

// Function that performs the conversion
double convertTemp(double initValue, int initScale, int finalScale){
    double finalValue;
    switch(initScale){
        // Celsius
        case 1:
            // Celsius to Kelvin
            if(finalScale == 1){
                finalValue = initValue + 273.15;
            }
            // Celsius to Fahrenheit
            else if(finalScale == 2){
                finalValue = (initValue * 9 / 5) + 32;
            }
            break;
        case 2:
            // Kelvin to Celsius
            if(finalScale == 1){
                finalValue = initValue - 273.15;
            }
            // Kelvin to Fahrenheit
            else if(finalScale == 2){
                finalValue = ((initValue - 273.15) * 9 / 5) + 32;
            }
            break;
        case 3:
            // Fahrenheit to Celsius
            if(finalScale == 1){
                finalValue = (initValue - 32) * 5 / 9;
            }
            // Fahrenheit to Kelvin
            else if(finalScale == 2){
                finalValue = ((initValue - 32) * 5 / 9) + 273,15;
            }
            break;

    }
    return finalValue;
}

int main(){
    int option;
    double initialValue, finalValue;
    while(1){
        // main menu
        printf("\n0 - Exit\n");
        printf("1 - Convert from Celsius to Kelvin\n");
        printf("2 - Convert from Celsius to Fahrenheit\n");
        printf("3 - Convert from Kelvin to Fahrenheit\n");
        printf("4 - Convert from Kelvin to Celsius\n");
        printf("5 - Convert from Fahrenheit to Celsius\n");
        printf("6 - Convert from Fahrenheit to Kelvin\n");
        
        printf("Select a number: ");
        scanf("%d",&option);
        if(!option){
            printf("Ending program\n");
            return 0;
        }

        printf("Please enter the initial value: ");
        scanf("%lf",&initialValue);
        
        switch(option){
            case 1:
                finalValue = convertTemp(initialValue,1,1);
                printf("Valor em Kelvin: %.2lf",finalValue);
                break;
            case 2:
                finalValue = convertTemp(initialValue,1,2);
                printf("Valor em Fahrenheit: %.2lf",finalValue);
                break;
            case 3:
                finalValue = convertTemp(initialValue,2,1);
                printf("Valor em Celsius: %.2lf",finalValue);
                break;
            case 4:
                finalValue = convertTemp(initialValue,2,2);
                printf("Valor em Fahrenheit: %.2lf",finalValue);
                break;
            case 5:
                finalValue = convertTemp(initialValue,3,1);
                printf("Valor em Celsius: %.2lf",finalValue);
                break;
            case 6:
                finalValue = convertTemp(initialValue,3,1);
                printf("Valor em Kelvin: %.2lf",finalValue);
                break;

        }
        printf("\n");
    }

    return 0;
}