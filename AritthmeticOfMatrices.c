#include <stdio.h>

int main() {
    int i, j, a[2][2], b[2][2], c[2][2], d[2][2], k;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("\nEnter the a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("\nEnter the b[%d][%d]=", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d \t", b[i][j]);
        }
        printf("\n");
    }

    printf("Addition of matrix 2 \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf(" %d \t", c[i][j]);
        }
        printf("\n");
    }

    printf("Multiply of two \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            d[i][j] = 0;
            for (k = 0; k < 2; k++) {
                d[i][j] += a[i][k] * b[k][j];
            }
        }
        printf("\n");
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d \t", d[i][j]);
        }
        printf("\n");
    }

    printf("A transpose = \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d \t", a[j][i]);
        }
        printf("\n");
    }

    printf("B transpose = \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d \t", b[j][i]);
        }
        printf("\n");
    }

    return 0;
}
