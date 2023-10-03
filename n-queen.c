#include <stdio.h>
#include <stdlib.h>

void queen(int k) {
    switch (k) {
    case 1: printf("|      **      |"); break;
    case 2: printf("|    ******    |"); break;
    case 3: printf("|    ******    |"); break;
    case 4: printf("|      **      |"); break;
    case 5: printf("|      **      |"); break;
    case 6: printf("|      **      |"); break;
    case 7: printf("|   ********   |"); break;
    case 8: printf("|**************|"); break;
    }
}

void blank() {
    printf("|              |");
}

int is_safe(int** arr, int x, int y, int n) {
    for (int row = 0; row < x; row++) {
        if (arr[row][y] == 1) {
            return 0;
        }
    }

    int row = x;
    int col = y;

    // left diagonal
    while (row >= 0 && col >= 0) {
        if (arr[row][col] == 1) {
            return 0;
        }
        row--;
        col--;
    }

    row = x;
    col = y;

    // right diagonal
    while (row >= 0 && col < n) {
        if (arr[row][col] == 1) {
            return 0;
        }
        row--;
        col++;
    }
    return 1;
}

int nQueen(int** arr, int x, int n) {
    if (x >= n) {
        return 1;
    }

    for (int col = 0; col < n; col++) {
        if (is_safe(arr, x, col, n)) {
            arr[x][col] = 1;

            if (nQueen(arr, x + 1, n)) {
                return 1;
            }
            arr[x][col] = 0; // backtrack
        }
    }
    return 0;
}

int main() {
    printf("Enter the size:\n");
    int n;
    scanf("%d", &n);

    int** arr = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = (int*)malloc(sizeof(int) * n);
        for (int j = 0; j < n; j++) {
            arr[i][j] = 0;
        }
    }

    if (nQueen(arr, 0, n)) {
        for (int i = 0; i < n; i++) {
            int f = 1;
            for (int k = 1; k <= 8; k++) {
                for (int j = 0; j < n; j++) {
                    if (arr[i][j] == 1) {
                        queen(k);
                    } else {
                        blank();
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
    }

    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
