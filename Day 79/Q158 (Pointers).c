/*
 * Q158 (Pointers)
 *
 * Write a program to demonstrate a pointer to a pointer (double pointer).
 */

#include <stdio.h>

int main(void) {
    int value = 7;
    int *ptr   = &value;
    int **dptr = &ptr;

    printf("Value: %d\n", value);
    printf("Via ptr: %d\n", *ptr);
    printf("Via double ptr: %d\n", **dptr);

    **dptr = 99;
    printf("After modification via double pointer: %d\n", value);
    return 0;
}