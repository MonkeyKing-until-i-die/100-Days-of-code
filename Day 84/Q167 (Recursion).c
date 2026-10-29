/*
 * Q167 (Recursion)
 *
 * Write a recursive program to find the GCD of two numbers using the Euclidean algorithm.
 */

#include <stdio.h>

static int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(void) {
    int a, b;
    printf("Enter two positive integers: ");
    if (scanf("%d %d", &a, &b) != 2 || a < 1 || b < 1) { fprintf(stderr, "Invalid.\n"); return 1; }
    printf("%d\n", gcd(a, b));
    return 0;
}