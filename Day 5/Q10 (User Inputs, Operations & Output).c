/*
 * Q10 (User Inputs, Operations & Output)
 *
 * Write a program to input time in seconds and convert it to hours:minutes:seconds format.
 */
#include <stdio.h>

int main(void) {
    int totalSeconds;

    printf("Enter time in seconds: ");
    if (scanf("%d", &totalSeconds) != 1 || totalSeconds < 0) {
        fprintf(stderr, "Invalid input. Seconds must be non-negative.\n");
        return 1;
    }

    int hours   = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);
    return 0;
}