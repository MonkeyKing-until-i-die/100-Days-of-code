/*
 * Q152 (Pointers)
 *
 * Write a program to swap two numbers using pointers.
 */

#include <stdio.h>

static void swapPtr(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int a, b;
    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2) { fprintf(stderr, "Invalid.\n"); return 1; }

    swapPtr(&a, &b);
    printf("After swap: %d %d\n", a, b);
    return 0;
}