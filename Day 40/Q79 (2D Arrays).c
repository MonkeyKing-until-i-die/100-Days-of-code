/*
 * Q79 (2D Arrays)
 *
 * Perform diagonal traversal of a matrix.
 */

#include <stdio.h>
#define MAX 100

int main(void) {
    int rows, cols;

    printf("Enter rows and cols: ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows < 1 || cols < 1 || rows > MAX || cols > MAX) {
        fprintf(stderr, "Invalid dimensions.\n");
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

    /* Diagonal traversal: upper diagonals then lower diagonals */
    for (int d = 0; d < cols; d++) {
        int i = 0, j = d;
        while (i < rows && j >= 0) {
            printf("%d ", mat[i][j]);
            i++; j--;
        }
    }
    for (int d = 1; d < rows; d++) {
        int i = d, j = cols - 1;
        while (i < rows && j >= 0) {
            printf("%d ", mat[i][j]);
            i++; j--;
        }
    }
    printf("\n");
    return 0;
}