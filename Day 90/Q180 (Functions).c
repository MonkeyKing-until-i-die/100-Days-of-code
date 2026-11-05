/*
 * Q180 (Functions)
 *
 * Write a program with a function to compute the nth term of the Fibonacci series.
 */

#include <stdio.h>

static long long fib(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    long long a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
        long long c = a + b;
        a = b; b = c;
    }
    return b;
}

int main(void) {
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n < 0) { fprintf(stderr, "Invalid.\n"); return 1; }
    printf("F(%d) = %lld\n", n, fib(n));
    return 0;
}