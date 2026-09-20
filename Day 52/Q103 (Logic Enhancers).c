/*
 * Q103 (Logic Enhancers)
 *
 * Find the pivot index where left sum equals right sum in an array. Print -1 if none exists.
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
    int nums[MAX];
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

    long long totalSum = 0;
    for (int i = 0; i < n; i++) totalSum += nums[i];

    long long leftSum = 0;
    int pivot = -1;
    for (int i = 0; i < n; i++) {
        long long rightSum = totalSum - leftSum - nums[i];
        if (leftSum == rightSum) { pivot = i; break; }
        leftSum += nums[i];
    }
    printf("%d\n", pivot);
    return 0;
}