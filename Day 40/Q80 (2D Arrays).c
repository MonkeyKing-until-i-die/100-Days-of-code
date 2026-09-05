/*
 * Q80 (2D Arrays)
 *
 * Multiply two matrices.
 */

#include <stdio.h>
#define MAX 100

int main(void) {
    int r1, c1, r2, c2;

    printf("Enter dimensions of first matrix (rows cols): ");
    if (scanf("%d %d", &r1, &c1) != 2 || r1 < 1 || c1 < 1 || r1 > MAX || c1 > MAX) {
        fprintf(stderr, "Invalid dimensions.\n");
        return 1;
    }

    printf("Enter dimensions of second matrix (rows cols): ");
    if (scanf("%d %d", &r2, &c2) != 2 || r2 < 1 || c2 < 1 || r2 > MAX || c2 > MAX) {
        fprintf(stderr, "Invalid dimensions.\n");
        return 1;
    }

    if (c1 != r2) {
        fprintf(stderr, "Matrices cannot be multiplied: incompatible dimensions.\n");
        return 1;
    }

    int a[MAX][MAX], b[MAX][MAX], result[MAX][MAX] = {{0}};

    printf("Enter first matrix:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            for (int k = 0; k < c1; k++)
                result[i][j] += a[i][k] * b[k][j];

    printf("Product:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            if (j < c2 - 1) printf("%d ", result[i][j]);
            else             printf("%d\n", result[i][j]);
        }
    }
    return 0;
}