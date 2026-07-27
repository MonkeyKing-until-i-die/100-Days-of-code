/*
 * Q13 (Conditional Statements)
 *
 * Write a program to input a year and check whether it is a leap year or not using conditional statements.
 */
#include <stdio.h>

int main(void) {
    int year;

    printf("Enter a year: ");
    if (scanf("%d", &year) != 1 || year < 1) {
        fprintf(stderr, "Invalid input. Year must be positive.\n");
        return 1;
    }

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }
    return 0;
}