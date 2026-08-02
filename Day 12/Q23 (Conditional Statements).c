/*
 * Q23 (Conditional Statements)
 *
 * Write a program to calculate library fine based on late days as follows: First 5 days late: 2/day, Next 5 days late: 4/day, Next 20 days late: 6/day, More than 30 days: Membership Cancelled.
 */
#include <stdio.h>

int main(void) {
    int days;

    printf("Enter number of late days: ");
    if (scanf("%d", &days) != 1 || days < 0) {
        fprintf(stderr, "Invalid input. Days must be non-negative.\n");
        return 1;
    }

    if (days == 0) {
        printf("No fine\n");
    } else if (days <= 5) {
        printf("Fine Rs.%d\n", days * 2);
    } else if (days <= 10) {
        int fine = 5 * 2 + (days - 5) * 4;
        printf("Fine Rs.%d\n", fine);
    } else if (days <= 30) {
        int fine = 5 * 2 + 5 * 4 + (days - 10) * 6;
        printf("Fine Rs.%d\n", fine);
    } else {
        printf("Membership Cancelled\n");
    }
    return 0;
}