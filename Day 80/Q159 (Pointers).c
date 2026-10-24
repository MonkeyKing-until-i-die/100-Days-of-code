/*
 * Q159 (Pointers)
 *
 * Write a program to pass an array to a function using a pointer and compute its maximum.
 */

#include <stdio.h>
#define MAX 1000

static int findMax(int *arr, int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > maxVal) maxVal = arr[i];
    return maxVal;
}

int main(void) {
    int n;
    printf("Enter array size: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) { fprintf(stderr, "Invalid.\n"); return 1; }

    int arr[MAX];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Maximum: %d\n", findMax(arr, n));
    return 0;
}