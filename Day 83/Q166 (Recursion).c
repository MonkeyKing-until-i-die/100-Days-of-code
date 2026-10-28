/*
 * Q166 (Recursion)
 *
 * Write a recursive program to compute the power of a number (base^exp).
 */

#include <stdio.h>

static long long power(long long base, int exp) {
    if (exp == 0) return 1;
    if (exp % 2 == 0) {
        long long half = power(base, exp / 2);
        return half * half;
    }
    return base * power(base, exp - 1);
}

int main(void) {
    long long base;
    int exp;
    printf("Enter base and exponent: ");
    if (scanf("%lld %d", &base, &exp) != 2 || exp < 0) { fprintf(stderr, "Invalid.\n"); return 1; }
    printf("%lld\n", power(base, exp));
    return 0;
}