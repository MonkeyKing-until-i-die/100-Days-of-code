/*
 * Q175 (Sorting)
 *
 * Write a program to sort an array in descending order using any sorting algorithm.
 */

#include <stdio.h>
#define MAX 1000

int main(void) {
    int n;
    printf("Enter array size: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) { fprintf(stderr, "Invalid.\n"); return 1; }

    int arr[MAX];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    /* Bubble sort descending */
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                int tmp = arr[j]; arr[j] = arr[j+1]; arr[j+1] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n-1) printf(" ");
    }
    printf("\n");
    return 0;
}