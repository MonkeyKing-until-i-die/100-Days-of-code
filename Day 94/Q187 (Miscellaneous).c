/*
 * Q187 (Miscellaneous)
 *
 * Write a program to print the Floyd's Triangle up to n rows.
 */

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter number of rows: ");
    if (scanf("%d", &n) != 1 || n < 1) { fprintf(stderr, "Invalid.\n"); return 1; }

    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
    return 0;
}