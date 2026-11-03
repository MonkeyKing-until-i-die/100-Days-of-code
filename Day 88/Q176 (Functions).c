/*
 * Q176 (Functions)
 *
 * Write a program with a function to check if a number is prime and use it to print primes up to n.
 */

#include <stdio.h>

static int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; (long long)i*i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main(void) {
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n < 1) { fprintf(stderr, "Invalid.\n"); return 1; }
    for (int i = 2; i <= n; i++)
        if (isPrime(i)) printf("%d ", i);
    printf("\n");
    return 0;
}