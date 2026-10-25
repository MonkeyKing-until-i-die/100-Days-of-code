/*
 * Q162 (Recursion)
 *
 * Write a recursive program to compute the nth Fibonacci number.
 */

#include <stdio.h>

static long long fib(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main(void) {
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n < 0) { fprintf(stderr, "Invalid.\n"); return 1; }
    printf("%lld\n", fib(n));
    return 0;
}