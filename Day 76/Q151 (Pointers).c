/*
 * Q151 (Pointers)
 *
 * Write a program to demonstrate pointer declaration, initialization, and dereferencing.
 */

#include <stdio.h>

int main(void) {
    int value = 42;
    int *ptr = &value;

    printf("Value: %d\n", value);
    printf("Address: %p\n", (void *)ptr);
    printf("Dereferenced: %d\n", *ptr);

    *ptr = 100;
    printf("After modification via pointer: %d\n", value);
    return 0;
}