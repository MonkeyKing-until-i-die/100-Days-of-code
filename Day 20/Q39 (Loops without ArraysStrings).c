/*
 * Q39 (Loops without Arrays/Strings)
 *
 * Write a program to find the product of odd digits of a number.
 */
#include <stdio.h>

int main(void) {
    long long n;

    printf("Enter a positive integer: ");
    if (scanf("%lld", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid input. n must be positive.\n");
        return 1;
    }

    long long product = 1;
    int hasOdd = 0;
    long long temp = n;

    while (temp != 0) {
        int digit = (int)(temp % 10);
        if (digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        temp /= 10;
    }

    if (!hasOdd) {
        printf("1 (no odd digits, assume 1)\n");
    } else {
        printf("%lld\n", product);
    }
    return 0;
}