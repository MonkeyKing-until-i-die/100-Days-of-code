/*
 * Q36 (Loops without Arrays/Strings)
 *
 * Write a program to find the HCF (GCD) of two numbers.
 */
#include <stdio.h>

int main(void) {
    int a, b;

    printf("Enter two positive integers: ");
    if (scanf("%d %d", &a, &b) != 2 || a < 1 || b < 1) {
        fprintf(stderr, "Invalid input. Both numbers must be positive.\n");
        return 1;
    }

    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    printf("%d\n", x);
    return 0;
}