/*
 * Q155 (Pointers)
 *
 * Write a program to demonstrate pointer arithmetic (increment, decrement, difference).
 */

#include <stdio.h>

int main(void) {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;

    printf("Current: %d (address %p)\n", *p, (void *)p);
    p++;
    printf("After ++: %d (address %p)\n", *p, (void *)p);
    p--;
    printf("After --: %d (address %p)\n", *p, (void *)p);

    int *q = arr + 4;
    printf("Pointer difference: %td\n", q - p);
    return 0;
}