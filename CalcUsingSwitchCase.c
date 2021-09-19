// Very tiny and stupid Calculator using switch case
// Answer will be 0 in case 4 if quotients value is in points.
// For instance, 5/3 will be shown as 0. This is because we have declared
// c as integer and not float.

#include <stdio.h>
int main(void)
{
    int a, b, c;
    char ch;
    printf("enter two numbers\n");
    scanf("%d%d", &a, &b);
    while((c = getchar()) != '\n' && c != EOF)
        ;

    // fflush(stdin);
    // flush the input buffer. You might use this function if you think
    // that there might be
    // some data in input buffer which can create problems for you while
    // taking user inputs from stdin.
    printf("enter your choice\n");
    printf("1. enter + for addition\n");
    printf("2. enter - for subtraction\n");
    printf("3. enter * for multiplication\n");
    printf("4. Enter / for division\n");
    printf("5. enter %% for modulo division\n");
    scanf("%c", &ch);
    switch(ch)
    {
    case '+':
        c = a + b;
        break;
    case '-':
        c = a - b;
        break;
    case '*':
        c = a * b;
        break;
    case '/':
        c = a / b;
        break;
    case '%':
        c = a % b; // Modulus division only works with
        // integers.
        break;
    default:
        printf("wrong choice\n");
    }
    printf("calculated value=%d\n", c);
    return 0;
}
