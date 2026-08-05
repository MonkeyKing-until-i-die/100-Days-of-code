/*
 * Q29 (Loops without Arrays/Strings)
 *
 * Write a program to calculate the factorial of a number.
 */
#include <stdio.h>

int main(void) {
    int n;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        fprintf(stderr, "Invalid input. n must be non-negative.\n");
        return 1;
    }

    long long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("%lld\n", factorial);
    return 0;
}