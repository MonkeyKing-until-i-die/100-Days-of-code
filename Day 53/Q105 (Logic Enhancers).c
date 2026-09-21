/*
 * Q105 (Logic Enhancers)
 *
 * Find the majority element (appears more than n/2 times) in an array. Print -1 if none exists.
 */

#include <stdio.h>
#include <stdlib.h>
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

    int minVal = nums[0], maxVal = nums[0];
    for (int i = 0; i < n; i++) {
        if (nums[i] < minVal) minVal = nums[i];
        if (nums[i] > maxVal) maxVal = nums[i];
    }

    int range = maxVal - minVal + 1;
    int *count = (int *)calloc((size_t)range, sizeof(int));
    if (!count) { fprintf(stderr, "Memory error.\n"); return 1; }
    for (int i = 0; i < n; i++) count[nums[i] - minVal]++;

    int majority = -1;
    for (int i = 0; i < range; i++) {
        if (count[i] > n / 2) { majority = i + minVal; break; }
    }
    free(count);
    printf("%d\n", majority);
    return 0;
}