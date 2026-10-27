/*
 * Q164 (Recursion)
 *
 * Write a recursive program to reverse a number.
 */

#include <stdio.h>

static long long reverseNum(long long n, long long rev) {
    if (n == 0) return rev;
    return reverseNum(n / 10, rev * 10 + n % 10);
}

int main(void) {
    long long n;
    printf("Enter a non-negative integer: ");
    if (scanf("%lld", &n) != 1 || n < 0) { fprintf(stderr, "Invalid.\n"); return 1; }
    printf("%lld\n", reverseNum(n, 0));
    return 0;
}