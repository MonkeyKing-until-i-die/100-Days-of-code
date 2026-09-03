/*
 * Q76 (2D Arrays)
 *
 * Check if a matrix is symmetric.
 */
#include <stdio.h>
#define MAX 100

int main(void) {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows < 1 || cols < 1 || rows > MAX || cols > MAX) {
        fprintf(stderr, "Invalid dimensions.\n");
        return 1;
    }

    if (rows != cols) {
        fprintf(stderr, "Matrix must be square to check symmetry.\n");
        return 1;
    }

    int mat[MAX][MAX];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &mat[i][j]) != 1) {
                fprintf(stderr, "Invalid input.\n");
                return 1;
            }
        }
    }

    int symmetric = 1;
    for (int i = 0; i < rows && symmetric; i++) {
        for (int j = 0; j < cols && symmetric; j++) {
            if (mat[i][j] != mat[j][i]) {
                symmetric = 0;
            }
        }
    }

    printf("%s\n", symmetric ? "True" : "False");
    return 0;
}