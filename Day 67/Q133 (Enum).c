/*
 * Q133 (Enum)
 *
 * Create an enum for months and print how many days each month has.
 */

#include <stdio.h>

typedef enum { JAN=1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC } Month;

int main(void) {
    int m;
    printf("Enter month number (1-12): ");
    if (scanf("%d", &m) != 1 || m < 1 || m > 12) { fprintf(stderr, "Invalid.\n"); return 1; }

    int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    printf("%d days\n", days[m]);
    return 0;
}