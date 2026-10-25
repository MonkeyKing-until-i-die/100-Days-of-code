/*
 * Q161 (Recursion)
 *
 * Write a recursive program to compute the factorial of a number.
 */

#include <stdio.h>

static long long factorial(int n) {
    if (n <= 1) return 1;
    return (long long)n * factorial(n - 1);
}

int main(void) {
    int n;
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1 || n < 0) { fprintf(stderr, "Invalid.\n"); return 1; }
    printf("%lld\n", factorial(n));
    return 0;
}