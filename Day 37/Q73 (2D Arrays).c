/*
 * Q73 (2D Arrays)
 *
 * Find the sum of each row of a matrix and store it in an array.
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

    long long rowSum[MAX];
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < cols; j++) {
            rowSum[i] += mat[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        if (i < rows - 1) {
            printf("%lld ", rowSum[i]);
        } else {
            printf("%lld\n", rowSum[i]);
        }
    }
    return 0;
}