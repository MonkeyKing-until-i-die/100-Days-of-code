/*
 * Q181 (Functions)
 *
 * Write a program with a function to find the minimum of three numbers.
 */

#include <stdio.h>

static int minOfThree(int a, int b, int c) {
    if (a <= b && a <= c) return a;
    if (b <= a && b <= c) return b;
    return c;
}

int main(void) {
    int a, b, c;
    printf("Enter three integers: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) { fprintf(stderr, "Invalid.\n"); return 1; }
    printf("Minimum: %d\n", minOfThree(a, b, c));
    return 0;
}