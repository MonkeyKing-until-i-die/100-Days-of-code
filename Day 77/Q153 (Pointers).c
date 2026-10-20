/*
 * Q153 (Pointers)
 *
 * Write a program to find the sum of array elements using pointers.
 */

#include <stdio.h>
#define MAX 1000

int main(void) {
    int n;
    printf("Enter array size: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) { fprintf(stderr, "Invalid.\n"); return 1; }

    int arr[MAX];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    long long sum = 0;
    int *ptr = arr;
    for (int i = 0; i < n; i++) sum += *(ptr + i);

    printf("%lld\n", sum);
    return 0;
}