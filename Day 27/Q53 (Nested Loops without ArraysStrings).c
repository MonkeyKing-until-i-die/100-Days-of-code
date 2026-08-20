/*
 * Q53 (Nested Loops without Arrays/Strings)
 *
 * Write a program to print the following pattern: * / *** / ***** / ******* / ********* / ******* / ***** / *** / * (diamond).
 */
#include <stdio.h>

int main(void) {
    int n = 5;

    /* Upper half including middle row */
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    /* Lower half */
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}