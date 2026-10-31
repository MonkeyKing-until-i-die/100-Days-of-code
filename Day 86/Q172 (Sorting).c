/*
 * Q172 (Sorting)
 *
 * Write a program to sort an array using Selection Sort and print the sorted array.
 */

#include <stdio.h>
#define MAX 1000

int main(void) {
    int n;
    printf("Enter array size: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) { fprintf(stderr, "Invalid.\n"); return 1; }

    int arr[MAX];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[minIdx]) minIdx = j;
        int tmp = arr[i]; arr[i] = arr[minIdx]; arr[minIdx] = tmp;
    }

    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n-1) printf(" ");
    }
    printf("\n");
    return 0;
}