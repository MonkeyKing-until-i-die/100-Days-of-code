/*
 * Q195 (Miscellaneous)
 *
 * Write a program to compute the sum of the Fibonacci series up to a given value n.
 */

#include <stdio.h>

int main(void) {
    long long n;
    printf("Enter max value n: ");
    if (scanf("%lld", &n) != 1 || n < 0) { fprintf(stderr, "Invalid.\n"); return 1; }

    long long a = 0, b = 1, sum = 0;
    while (a <= n) {
        sum += a;
        long long c = a + b;
        a = b;
        b = c;
    }
    printf("Sum of Fibonacci numbers up to %lld = %lld\n", n, sum);
    return 0;
}