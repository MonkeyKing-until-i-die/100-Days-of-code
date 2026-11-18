/*
 * Q199 (Miscellaneous)
 *
 * Write a program to count the number of set bits (1s) in the binary representation of a number.
 */

#include <stdio.h>

int main(void) {
    unsigned int n;
    printf("Enter a non-negative integer: ");
    if (scanf("%u", &n) != 1) { fprintf(stderr, "Invalid.\n"); return 1; }

    int count = 0;
    while (n) { count += (int)(n & 1u); n >>= 1; }
    printf("Set bits: %d\n", count);
    return 0;
}