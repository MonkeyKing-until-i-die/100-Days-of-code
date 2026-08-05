/*
 * Q30 (Loops without Arrays/Strings)
 *
 * Write a program to reverse a given number.
 */
#include <stdio.h>

int main(void) {
    long long n;

    printf("Enter a number: ");
    if (scanf("%lld", &n) != 1 || n < 0) {
        fprintf(stderr, "Invalid input. n must be non-negative.\n");
        return 1;
    }

    long long reversed = 0;
    long long temp = n;

    while (temp != 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }

    printf("%lld\n", reversed);
    return 0;
}