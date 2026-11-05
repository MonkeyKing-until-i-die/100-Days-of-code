/*
 * Q179 (Functions)
 *
 * Write a program with a function that returns the absolute value of an integer.
 */

#include <stdio.h>

static int absVal(int n) {
    return n < 0 ? -n : n;
}

int main(void) {
    int n;
    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) { fprintf(stderr, "Invalid.\n"); return 1; }
    printf("|%d| = %d\n", n, absVal(n));
    return 0;
}