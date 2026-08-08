/*
 * Q34 (Loops without Arrays/Strings)
 *
 * Write a program to check if a number is prime.
 */
#include <stdio.h>

int main(void) {
    int n;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        fprintf(stderr, "Invalid input. n must be positive.\n");
        return 1;
    }

    if (n < 2) {
        printf("Not prime\n");
        return 0;
    }

    int isPrime = 1;
    for (int i = 2; (long long)i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }
    return 0;
}