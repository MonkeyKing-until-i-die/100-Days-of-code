/*
 * Q113 (Logic Enhancers)
 *
 * Find the kth smallest element in an array.
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

static int cmpInt(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main(void) {
    int n, k;
    printf("Enter array size: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }
    int arr[MAX];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter k: ");
    if (scanf("%d", &k) != 1 || k < 1 || k > n) {
        fprintf(stderr, "Invalid k.\n");
        return 1;
    }

    qsort(arr, (size_t)n, sizeof(int), cmpInt);
    printf("%d\n", arr[k - 1]);
    return 0;
}