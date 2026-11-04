/*
 * Q177 (Functions)
 *
 * Write a program with a function to compute nCr (combinations) using factorials.
 */

#include <stdio.h>

static long long fact(int n) {
    long long r = 1;
    for (int i = 2; i <= n; i++) r *= i;
    return r;
}

int main(void) {
    int n, r;
    printf("Enter n and r (n >= r >= 0): ");
    if (scanf("%d %d", &n, &r) != 2 || r < 0 || r > n) { fprintf(stderr, "Invalid.\n"); return 1; }
    printf("C(%d,%d) = %lld\n", n, r, fact(n) / (fact(r) * fact(n - r)));
    return 0;
}