/*
 * Q170 (Recursion)
 *
 * Write a recursive program to convert a decimal number to binary.
 */

#include <stdio.h>

static void toBinary(int n) {
    if (n > 1) toBinary(n / 2);
    printf("%d", n % 2);
}

int main(void) {
    int n;
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1 || n < 0) { fprintf(stderr, "Invalid.\n"); return 1; }
    if (n == 0) { printf("0\n"); return 0; }
    toBinary(n);
    printf("\n");
    return 0;
}