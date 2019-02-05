// Convert base10(decimal) values any base

#include<stdio.h>

void printDigit(int, int);

int main(){

    int input, base;

    // Getting user input
    printf("Enter number: ");
    scanf("%d", &input);
    printf("Enter base: ");
    scanf("%d", &base);

    printf("%d to base %d : ", input, base);

    printDigit(input, base);

    return 0;
}

// This is a reccursive function that prints digit by digit
void printDigit(int num, int base){
    if(num > 0){
        // getting current digit to be printed
        int digit = num % base;
        num = num - digit;
        num = num / base;
        // Call to function to print next digit
        printDigit(num, base);
        // If the current digit is more than 9 (eg: 10=A, 11=B)
        if(digit > 9){
            printf("%c", 55 + digit);
        }
        // Else print the digit directly
        else {
            printf("%d", digit);
        }
    } else {
        return;
    }
}