/*
 * Q44 (Loops without Arrays/Strings)
 *
 * Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + ... up to n terms.
 */
#include <stdio.h>

int main(void) {
    int n;

    printf("Enter number of terms: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        fprintf(stderr, "Invalid input. n must be at least 1.\n");
        return 1;
    }

    double sum = 0.0;
    int numerator = 1;
    int denominator = 2;

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            sum += 1.0;
        } else {
            sum += (double)numerator / (double)denominator;
        }
        numerator += 2;
        denominator += 2;
    }

    printf("Approximate sum: %.1f\n", sum);
    return 0;
}