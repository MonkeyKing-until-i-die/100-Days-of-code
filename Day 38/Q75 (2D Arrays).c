/*
 * Q75 (2D Arrays)
 *
 * Add two matrices.
 */
#include <stdio.h>
#define MAX 100

int main(void) {
    int rows, cols;

    printf("Enter dimensions for both matrices (rows cols): ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows < 1 || cols < 1 || rows > MAX || cols > MAX) {
        fprintf(stderr, "Invalid dimensions.\n");
        return 1;
    }

    int a[MAX][MAX], b[MAX][MAX];
    printf("Enter first matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &a[i][j]) != 1) {
                fprintf(stderr, "Invalid input.\n");
                return 1;
            }
        }
    }

    printf("Enter second matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &b[i][j]) != 1) {
                fprintf(stderr, "Invalid input.\n");
                return 1;
            }
        }
    }

    printf("Sum matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j < cols - 1) {
                printf("%d ", a[i][j] + b[i][j]);
            } else {
                printf("%d\n", a[i][j] + b[i][j]);
            }
        }
    }
    return 0;
}