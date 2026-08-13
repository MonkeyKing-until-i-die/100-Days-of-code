/*
 * Q42 (Loops without Arrays/Strings)
 *
 * Write a program to check if a number is a perfect number.
 */
#include <stdio.h>

int main(void) {
    int n;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        fprintf(stderr, "Invalid input. n must be positive.\n");
        return 1;
    }

    int sumOfDivisors = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sumOfDivisors += i;
        }
    }

    if (sumOfDivisors == n) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }
    return 0;
}