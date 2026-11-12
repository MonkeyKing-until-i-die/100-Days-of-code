/*
 * Q190 (Miscellaneous)
 *
 * Write a program to find and print all prime numbers in a range [a, b] using the Sieve of Eratosthenes.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int a, b;
    printf("Enter range [a, b]: ");
    if (scanf("%d %d", &a, &b) != 2 || a < 2 || b < a) { fprintf(stderr, "Invalid range.\n"); return 1; }

    char *sieve = (char *)calloc((size_t)(b + 1), sizeof(char));
    if (!sieve) { fprintf(stderr, "Memory error.\n"); return 1; }

    for (int i = 2; (long long)i*i <= b; i++) {
        if (!sieve[i]) {
            for (int j = i*i; j <= b; j += i) sieve[j] = 1;
        }
    }

    printf("Primes in [%d, %d]:\n", a, b);
    for (int i = (a < 2 ? 2 : a); i <= b; i++)
        if (!sieve[i]) printf("%d ", i);
    printf("\n");

    free(sieve);
    return 0;
}