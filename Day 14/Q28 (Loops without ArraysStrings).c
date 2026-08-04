/*
 * Q28 (Loops without Arrays/Strings)
 *
 * Write a program to print the product of even numbers from 1 to n.
 */
#include <stdio.h>

int main(void) {
    int n;

    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        fprintf(stderr, "Invalid input. n must be at least 1.\n");
        return 1;
    }

    long long product = 1;
    int hasEven = 0;

    for (int i = 2; i <= n; i += 2) {
        product *= i;
        hasEven = 1;
    }

    if (!hasEven) {
        printf("No even numbers in range 1 to %d\n", n);
    } else {
        printf("%lld\n", product);
    }
    return 0;
}