/*
 * Q77 (2D Arrays)
 *
 * Check if the elements on the diagonal of a matrix are distinct.
 */
#include <stdio.h>
#include <string.h>
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

    int diagLen = rows < cols ? rows : cols;
    int distinct = 1;

    for (int i = 0; i < diagLen && distinct; i++) {
        for (int j = i + 1; j < diagLen && distinct; j++) {
            if (mat[i][i] == mat[j][j]) {
                distinct = 0;
            }
        }
    }

    printf("%s\n", distinct ? "True" : "False");
    return 0;
}