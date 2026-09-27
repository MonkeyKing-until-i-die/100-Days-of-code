/*
 * Q116 (Logic Enhancers)
 *
 * Find two indices in an array such that their values sum to a target.
 */

#include <stdio.h>
#define MAX 1000

int main(void) {
    int n, target;
    printf("Enter array size: ");
    if (scanf("%d", &n) != 1 || n < 2 || n > MAX) { fprintf(stderr, "Invalid.\n"); return 1; }
    int nums[MAX];
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);
    printf("Enter target: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (nums[i] + nums[j] == target) { printf("%d %d\n", i, j); return 0; }

    printf("-1 -1\n");
    return 0;
}