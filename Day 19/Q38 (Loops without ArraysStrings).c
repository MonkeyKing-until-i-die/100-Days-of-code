/*
 * Q38 (Loops without Arrays/Strings)
 *
 * Write a program to find the sum of digits of a number.
 */
#include <stdio.h>

int main(void) {
    long long n;

    printf("Enter a non-negative integer: ");
    if (scanf("%lld", &n) != 1 || n < 0) {
        fprintf(stderr, "Invalid input. n must be non-negative.\n");
        return 1;
    }

    long long sum = 0;
    long long temp = n;

    if (temp == 0) {
        printf("0\n");
        return 0;
    }

    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    printf("%lld\n", sum);
    return 0;
}