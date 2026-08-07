/*
 * Q31 (Loops without Arrays/Strings)
 *
 * Write a program to take a number as input and print its equivalent binary representation.
 */
#include <stdio.h>

int main(void) {
    int n;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        fprintf(stderr, "Invalid input. n must be non-negative.\n");
        return 1;
    }

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    int binary[32];
    int index = 0;

    while (n > 0) {
        binary[index++] = n % 2;
        n /= 2;
    }

    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
    return 0;
}