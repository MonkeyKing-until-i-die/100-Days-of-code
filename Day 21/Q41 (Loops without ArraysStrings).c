/*
 * Q41 (Loops without Arrays/Strings)
 *
 * Write a program to swap the first and last digit of a number.
 */
#include <stdio.h>
#include <math.h>

int main(void) {
    long long n;

    printf("Enter a positive integer: ");
    if (scanf("%lld", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid input. n must be positive.\n");
        return 1;
    }

    if (n < 10) {
        printf("%lld\n", n);
        return 0;
    }

    int digits = 0;
    long long temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    long long firstDigit = n / (long long)pow(10, digits - 1);
    long long lastDigit  = n % 10;
    long long middle     = n % (long long)pow(10, digits - 1) / 10;
    long long result     = lastDigit * (long long)pow(10, digits - 1)
                           + middle * 10 + firstDigit;

    printf("%lld\n", result);
    return 0;
}