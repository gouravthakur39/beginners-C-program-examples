#include <stdio.h>

int question(char question[],
    const char * format_sepcifier) {
    int value;
    printf(question);
    scanf(format_sepcifier, & value);
    return value;
}
int main() {
    // Variable declaration 
    int numerator1, numerator2, denominator1, denominator2,
    num_result, denom_result;
    // Read each fraction 
    numerator1 = question("What is your first numerator :\n", "%d");
    denominator1 = question("What is your first denominator :\n", "%d");
    numerator2 = question("What is your second numerator :\n", "%d");
    denominator2 = question("What is your second denominator :\n", "%d");
    // Compare the demonators
    if (denominator1 == denominator2) {
        num_result = numerator1 + numerator2;
        denom_result = denominator1; /*  or 2, they are equal */
    } else {
        num_result = (numerator1 * denominator2) + (numerator2 * denominator1);
        denom_result = denominator1 * denominator2;
    }
    printf("The result of %d / %d  + %d / %d  is: %d / %d \n", numerator1, denominator1, numerator2, denominator2, num_result, denom_result);
    return 0;
}



