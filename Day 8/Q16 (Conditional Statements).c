/*
 * Q16 (Conditional Statements)
 *
 * Write a program to input three numbers and find the largest among them using if-else.
 */
#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Enter three numbers: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    int largest;
    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }

    printf("Largest is %d\n", largest);
    return 0;
}