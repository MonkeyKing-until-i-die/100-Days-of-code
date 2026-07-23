/*
 * Q7 (User Inputs, Operations & Output)
 *
 * Write a program to swap two numbers without using a third variable.
 */
#include <stdio.h>

int main(void) {
    int a, b;

    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: %d %d\n", a, b);
    return 0;
}