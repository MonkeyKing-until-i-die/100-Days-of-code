/*
 * Q112 (Logic Enhancers)
 *
 * Find the maximum sum contiguous subarray using Kadane's algorithm.
 */

#include <stdio.h>
#define MAX 1000

int main(void) {
    int n;
    printf("Enter array size: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }
    int arr[MAX];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    long long maxSoFar = arr[0], maxEndingHere = arr[0];
    for (int i = 1; i < n; i++) {
        maxEndingHere = maxEndingHere + arr[i];
        if (arr[i] > maxEndingHere) maxEndingHere = arr[i];
        if (maxEndingHere > maxSoFar) maxSoFar = maxEndingHere;
    }
    printf("%lld\n", maxSoFar);
    return 0;
}