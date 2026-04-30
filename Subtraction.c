#include <stdio.h>

// Function to perform subtraction
int subtract(int x, int y) {
    return x - y;
}

int main() {
    int a, b, c;

    printf("Enter two numbers: ");

    // Input validation
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input! Please enter integers only.\n");
        return 1;
    }

    c = subtract(a, b);

    printf("Subtraction is: %d\n", c);

    return 0;
}
