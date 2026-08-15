/*
 * Q46 (Nested Loops without Arrays/Strings)
 *
 * Write a program to print the following pattern: ***** (5x5 solid rectangle of stars).
 */
#include <stdio.h>

int main(void) {
    int rows = 5;
    int cols = 5;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}