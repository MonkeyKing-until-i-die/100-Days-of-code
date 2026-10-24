/*
 * Q160 (Pointers)
 *
 * Write a program to allocate memory dynamically for an array using malloc() and free it.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Enter array size: ");
    if (scanf("%d", &n) != 1 || n < 1) { fprintf(stderr, "Invalid.\n"); return 1; }

    int *arr = (int *)malloc((size_t)n * sizeof(int));
    if (!arr) { fprintf(stderr, "Memory allocation failed.\n"); return 1; }

    for (int i = 0; i < n; i++) arr[i] = (i + 1) * 10;

    printf("Array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    printf("Memory freed.\n");
    return 0;
}