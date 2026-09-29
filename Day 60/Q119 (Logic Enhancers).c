/*
 * Q119 (Logic Enhancers)
 *
 * Find the one repeated element in an integer array in a single iteration.
 */

#include <stdio.h>
#define MAX 1000

int main(void) {
    int n;
    printf("Enter array size: ");
    if (scanf("%d", &n) != 1 || n < 2 || n > MAX) { fprintf(stderr, "Invalid.\n"); return 1; }
    int nums[MAX];
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

    int xorAll = 0;
    for (int i = 0; i < n; i++) xorAll ^= nums[i];
    /* XOR of range 1..n-1 */
    for (int i = 1; i < n; i++) xorAll ^= i;
    printf("%d\n", xorAll);
    return 0;
}