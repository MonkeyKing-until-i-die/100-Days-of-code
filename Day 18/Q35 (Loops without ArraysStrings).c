/*
 * Q35 (Loops without Arrays/Strings)
 *
 * Write a program to print all factors of a given number.
 */
#include <stdio.h>

int main(void) {
    int n;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        fprintf(stderr, "Invalid input. n must be positive.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}