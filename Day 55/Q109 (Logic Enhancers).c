/*
 * Q109 (Logic Enhancers)
 *
 * Find the maximum sum of any contiguous subarray of size k.
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

    long long maxSum = 0, windowSum = 0;
    for (int i = 0; i < k; i++) windowSum += arr[i];
    maxSum = windowSum;
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum) maxSum = windowSum;
    }
    printf("%lld\n", maxSum);
    return 0;
}