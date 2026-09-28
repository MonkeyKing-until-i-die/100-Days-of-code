/*
 * Q117 (Logic Enhancers)
 *
 * Merge two sorted arrays into one sorted array.
 */

#include <stdio.h>
#define MAX 2000

int main(void) {
    int m, n;
    printf("Enter sizes of two sorted arrays: ");
    if (scanf("%d %d", &m, &n) != 2 || m < 1 || n < 1 || m + n > MAX) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }
    int a[MAX], b[MAX], merged[MAX];
    for (int i = 0; i < m; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);

    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (a[i] <= b[j]) merged[k++] = a[i++];
        else              merged[k++] = b[j++];
    }
    while (i < m) merged[k++] = a[i++];
    while (j < n) merged[k++] = b[j++];

    for (int x = 0; x < k; x++) {
        printf("%d", merged[x]);
        if (x < k - 1) printf(" ");
    }
    printf("\n");
    return 0;
}