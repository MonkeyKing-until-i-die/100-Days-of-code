/*
 * Q12 (Conditional Statements)
 *
 * Write a program to input an integer and check whether it is positive, negative or zero using nested if-else.
 */
#include <stdio.h>

int main(void) {
    int n;

    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    if (n > 0) {
        printf("Positive\n");
    } else if (n < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }
    return 0;
}