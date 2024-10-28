#include <stdio.h>
#include <math.h>

void Input() {
    printf("Type number to choose the algorithm:\n");
    printf(" 1. + (Addition)\n");
    printf(" 2. - (Subtraction)\n");
    printf(" 3. * (Multiplication)\n");
    printf(" 4. / (Division)\n");
    printf(" 5. ^ (Exponentiation)\n");
    printf(" 6. square (Square Root)\n");
    printf(" 7. log (Logarithm)\n");
    printf(" 8. floor (Floor Function)\n");
    printf(" 9. ceil (Ceiling Function)\n");
    printf("10. Exit\n");
    printf("InputNum: ");
}

int main() {
    int InputNum = 0;
    float a = 0, b = 0, result = 0;

    do {
        Input();
        scanf("%d", &InputNum);

        switch (InputNum) {
            case 1:
                printf("Enter First Number: ");
                scanf("%f", &a);
                printf("Enter Second Number: ");
                scanf("%f", &b);
                result = a + b;
                printf("%.2f + %.2f = %.2f\n", a, b, result);
                break;

            case 2:
                printf("Enter First Number: ");
                scanf("%f", &a);
                printf("Enter Second Number: ");
                scanf("%f", &b);
                result = a - b;
                printf("%.2f - %.2f = %.2f\n", a, b, result);
                break;

            case 3:
                printf("Enter First Number: ");
                scanf("%f", &a);
                printf("Enter Second Number: ");
                scanf("%f", &b);
                result = a * b;
                printf("%.2f * %.2f = %.2f\n", a, b, result);
                break;

            case 4:
                printf("Enter Dividend: ");
                scanf("%f", &a);
                printf("Enter Divisor: ");
                scanf("%f", &b);
                if (b == 0) {
                    printf("Error: Divisor cannot be zero.\n");
                } else {
                    result = a / b;
                    printf("%.2f / %.2f = %.2f\n", a, b, result);
                }
                break;

            case 5:
                printf("Enter the base number: ");
                scanf("%f", &a);
                printf("Enter the exponent: ");
                scanf("%f", &b);
                printf("%.2f raised to the power of %.2f is %.2f\n", a, b, pow(a, b));
                break;

            case 6:
                printf("Enter the radicand: ");
                scanf("%f", &a);
                printf("Square root is %.2f\n", sqrt(a));
                break;

            case 7:
                printf("Enter the number for log: ");
                scanf("%f", &a);
                printf("The log is %.2f\n", log(a));
                break;

            case 8:
                printf("Enter the number: ");
                scanf("%f", &a);
                printf("The floor value is %.2f\n", floor(a));
                break;

            case 9:
                printf("Enter the number: ");
                scanf("%f", &a);
                printf("The ceiling value is %.2f\n", ceil(a));
                break;

            case 10:
                printf("Thank you for using the calculator!\n");
                break;

            default:
                printf("Invalid number, please choose again.\n");
        }
    } while (InputNum != 10);

    return 0;
}
