#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int i, j, k;

    // Input dimensions for Matrix 1
    printf("Enter rows and columns of Matrix 1 (r c): ");
    if (scanf("%d %d", &r1, &c1) != 2) return 0;

    // Input dimensions for Matrix 2
    printf("Enter rows and columns of Matrix 2 (r c): ");
    if (scanf("%d %d", &r2, &c2) != 2) return 0;

    // Check multiplication compatibility: columns of M1 must equal rows of M2
    if (c1 != r2) {
        printf("Error: multiplication not possible (columns of M1 != rows of M2)\n");
        return 0;
    }

    // Declare matrices (VLA - variable length arrays)
    int m1[r1][c1], m2[r2][c2], result[r1][c2];

    // Input elements for Matrix 1 with zero-based index prompt
    printf("Enter elements of Matrix 1:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }

    // Input elements for Matrix 2 with zero-based index prompt
    printf("Enter elements of Matrix 2:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }

    // Optional: print the input matrices for verification
    printf("\nMatrix 1 (%d x %d):\n", r1, c1);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d\t", m1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2 (%d x %d):\n", r2, c2);
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", m2[i][j]);
        }
        printf("\n");
    }

    // Initialize result matrix to 0 (size r1 x c2)
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    // Print result in matrix form
    printf("\nResultant Matrix (%d x %d):\n", r1, c2);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
