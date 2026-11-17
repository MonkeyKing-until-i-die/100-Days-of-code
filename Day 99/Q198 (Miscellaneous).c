/*
 * Q198 (Miscellaneous)
 *
 * Write a program to find the digital root of a number by repeatedly summing its digits until a single digit remains.
 */

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 0) { fprintf(stderr, "Invalid.\n"); return 1; }

    while (n >= 10) {
        int sum = 0;
        while (n) { sum += n % 10; n /= 10; }
        n = sum;
    }
    printf("Digital root: %d\n", n);
    return 0;
}