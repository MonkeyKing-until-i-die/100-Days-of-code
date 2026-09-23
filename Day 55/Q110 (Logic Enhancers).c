/*
 * Q110 (Logic Enhancers)
 *
 * Find the maximum element in each sliding window of size k.
 */

#include <stdio.h>
#define MAX 1000

int main(void) {
    int n, k;
    printf("Enter array size: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }
    int arr[MAX];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter window size k: ");
    if (scanf("%d", &k) != 1 || k < 1 || k > n) {
        fprintf(stderr, "Invalid k.\n");
        return 1;
    }

    for (int i = 0; i <= n - k; i++) {
        int maxVal = arr[i];
        for (int j = i + 1; j < i + k; j++)
            if (arr[j] > maxVal) maxVal = arr[j];
        printf("%d ", maxVal);
    }
    printf("\n");
    return 0;
}