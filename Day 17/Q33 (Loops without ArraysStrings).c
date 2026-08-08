/*
 * Q33 (Loops without Arrays/Strings)
 *
 * Write a program to check if a number is an Armstrong number.
 */
#include <stdio.h>
#include <math.h>

int main(void) {
    int n;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid input. n must be positive.\n");
        return 1;
    }

    int temp = n;
    int digits = 0;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    long long sum = 0;

    while (temp != 0) {
        int digit = temp % 10;
        sum += (long long)round(pow((double)digit, (double)digits));
        temp /= 10;
    }

    if (sum == n) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }
    return 0;
}