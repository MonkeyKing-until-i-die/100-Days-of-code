/*
 * Q168 (Recursion)
 *
 * Write a recursive program to print numbers from 1 to n.
 */

#include <stdio.h>

static void printN(int i, int n) {
    if (i > n) return;
    printf("%d ", i);
    printN(i + 1, n);
}

int main(void) {
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n < 1) { fprintf(stderr, "Invalid.\n"); return 1; }
    printN(1, n);
    printf("\n");
    return 0;
}