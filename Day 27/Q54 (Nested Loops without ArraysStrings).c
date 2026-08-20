/*
 * Q54 (Nested Loops without Arrays/Strings)
 *
 * Write a program to print the following pattern: * / *** / ***** / ******* / ***** / *** / * (diamond with spaces).
 */
#include <stdio.h>

int main(void) {
    int n = 4;

    /* Upper half including middle */
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    /* Lower half */
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}