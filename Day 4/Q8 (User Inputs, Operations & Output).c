/*
 * Q8 (User Inputs, Operations & Output)
 *
 * Write a program to find and display the sum of the first n natural numbers.
 */
#include <stdio.h>

int main(void) {
    int n;

    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        fprintf(stderr, "Invalid input. n must be non-negative.\n");
        return 1;
    }

    long long sum = (long long)n * (n + 1) / 2;
    printf("Sum=%lld\n", sum);
    return 0;
}