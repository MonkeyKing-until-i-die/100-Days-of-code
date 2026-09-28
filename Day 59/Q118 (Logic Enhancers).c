/*
 * Q118 (Logic Enhancers)
 *
 * Find the missing number in an array containing integers 0 to n.
 */

#include <stdio.h>
#define MAX 1000

int main(void) {
    int n;
    printf("Enter array size: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) { fprintf(stderr, "Invalid.\n"); return 1; }
    int nums[MAX];
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

    long long expectedSum = (long long)n * (n + 1) / 2;
    long long actualSum = 0;
    for (int i = 0; i < n; i++) actualSum += nums[i];
    printf("%lld\n", expectedSum - actualSum);
    return 0;
}