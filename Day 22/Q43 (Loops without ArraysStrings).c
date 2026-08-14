/*
 * Q43 (Loops without Arrays/Strings)
 *
 * Write a program to check if a number is a strong number.
 */
#include <stdio.h>

/* Compute factorial of a single digit */
static long long factorial(int d) {
    long long result = 1;
    for (int i = 1; i <= d; i++) {
        result *= i;
    }
    return result;
}

int main(void) {
    int n;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        fprintf(stderr, "Invalid input. n must be positive.\n");
        return 1;
    }

    int temp = n;
    long long sum = 0;

    while (temp != 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if (sum == n) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }
    return 0;
}