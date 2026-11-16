/*
 * Q196 (Miscellaneous)
 *
 * Write a program to print a multiplication table for numbers 1 to n in matrix form.
 */

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n < 1) { fprintf(stderr, "Invalid.\n"); return 1; }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }
    return 0;
}