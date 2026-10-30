/*
 * Q169 (Recursion)
 *
 * Write a recursive program to compute the sum of the first n natural numbers.
 */

#include <stdio.h>

static long long sumN(int n) {
    if (n <= 0) return 0;
    return n + sumN(n - 1);
}

int main(void) {
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n < 0) { fprintf(stderr, "Invalid.\n"); return 1; }
    printf("%lld\n", sumN(n));
    return 0;
}