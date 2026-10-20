/*
 * Q154 (Pointers)
 *
 * Write a program to reverse an array using pointers.
 */

#include <stdio.h>
#define MAX 1000

int main(void) {
    int n;
    printf("Enter array size: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) { fprintf(stderr, "Invalid.\n"); return 1; }

    int arr[MAX];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int *left  = arr;
    int *right = arr + n - 1;
    while (left < right) {
        int tmp = *left;
        *left   = *right;
        *right  = tmp;
        left++;
        right--;
    }

    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(" ");
    }
    printf("\n");
    return 0;
}