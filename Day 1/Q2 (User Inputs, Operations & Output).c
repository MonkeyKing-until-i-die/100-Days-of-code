/*
 * Q2 (User Inputs, Operations & Output)
 *
 * Write a program to input two numbers and display their sum, difference, product, and quotient.
 */
#include <stdio.h>

int main(void) {
    int a, b;

    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    if (b == 0) {
        printf("Sum=%d, Diff=%d, Product=%d, Quotient=undefined (division by zero)\n",
               a + b, a - b, a * b);
    } else {
        printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n",
               a + b, a - b, a * b, a / b);
    }
    return 0;
}