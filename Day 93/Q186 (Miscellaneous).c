/*
 * Q186 (Miscellaneous)
 *
 * Write a program to print the Pascal's Triangle up to n rows.
 */

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter number of rows: ");
    if (scanf("%d", &n) != 1 || n < 1) { fprintf(stderr, "Invalid.\n"); return 1; }

    long long C[64][64] = {{0}};
    for (int i = 0; i < n; i++) {
        C[i][0] = 1;
        for (int j = 1; j <= i; j++) C[i][j] = C[i-1][j-1] + C[i-1][j];
    }

    for (int i = 0; i < n; i++) {
        for (int sp = 0; sp < n - i - 1; sp++) printf("  ");
        for (int j = 0; j <= i; j++) printf("%4lld", C[i][j]);
        printf("\n");
    }
    return 0;
}