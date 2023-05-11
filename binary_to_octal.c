#include <math.h>
#include <stdio.h>

int convert_to_octal(long long binary);

int main() {
    long long binary;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    printf("%lld in binary = %d in octal", binary, convert(binary));
    return 0;
}

int convert_to_octal(long long binary) {
    int octal = 0, decimal = 0, i = 0;
    
    //Step 1> convert binary to decimal
    //Step 2> convert decimal to octal
    
    // converting binary to decimal
    while (binary != 0) {
        decimal += (binary % 10) * pow(2, i);
        ++i;
        binary /= 10;
    }
    i = 1;

    // converting to decimal to octal
    while (decimal != 0) {
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }
    return octal;
}
