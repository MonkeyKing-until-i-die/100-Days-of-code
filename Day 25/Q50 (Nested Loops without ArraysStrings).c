/*
 * Q50 (Nested Loops without Arrays/Strings)
 *
 * Write a program to print the following pattern: ***** / **** / *** / ** / * (right-aligned decreasing triangle with spaces).
 */
#include <stdio.h>

int main(void) {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < i - 1; j++) {
            printf(" ");
        }
        for (int j = i; j <= rows; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}