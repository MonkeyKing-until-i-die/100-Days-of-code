/*
 * Q55 (Nested Loops without Arrays/Strings)
 *
 * Write a program to print all the prime numbers from 1 to n.
 */
#include <stdio.h>

static int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; (long long)i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    int n;

    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        fprintf(stderr, "Invalid input. n must be positive.\n");
        return 1;
    }

    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}