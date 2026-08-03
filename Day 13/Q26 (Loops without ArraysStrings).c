/*
 * Q26 (Loops without Arrays/Strings)
 *
 * Write a program to print numbers from 1 to n.
 */
#include <stdio.h>

int main(void) {
    int n;

    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        fprintf(stderr, "Invalid input. n must be at least 1.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        if (i < n) {
            printf("%d ", i);
        } else {
            printf("%d\n", i);
        }
    }
    return 0;
}