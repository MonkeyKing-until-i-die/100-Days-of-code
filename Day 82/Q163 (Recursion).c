/*
 * Q163 (Recursion)
 *
 * Write a recursive program to compute the sum of digits of a number.
 */

#include <stdio.h>

static long long digitSum(long long n) {
    if (n == 0) return 0;
    return (n % 10) + digitSum(n / 10);
}

int main(void) {
    long long n;
    printf("Enter a non-negative integer: ");
    if (scanf("%lld", &n) != 1 || n < 0) { fprintf(stderr, "Invalid.\n"); return 1; }
    printf("%lld\n", digitSum(n));
    return 0;
}