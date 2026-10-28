/*
 * Q165 (Recursion)
 *
 * Write a recursive program to check if a number is a palindrome.
 */

#include <stdio.h>

static long long reverseNum(long long n, long long r) {
    if (n == 0) return r;
    return reverseNum(n / 10, r * 10 + n % 10);
}

int main(void) {
    long long n;
    printf("Enter a non-negative integer: ");
    if (scanf("%lld", &n) != 1 || n < 0) { fprintf(stderr, "Invalid.\n"); return 1; }
    printf("%s\n", n == reverseNum(n, 0) ? "Palindrome" : "Not palindrome");
    return 0;
}