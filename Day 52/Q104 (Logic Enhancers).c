/*
 * Q104 (Logic Enhancers)
 *
 * Find the pivot integer x such that sum of 1..x equals sum of x..n. Print -1 if none exists.
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    /* Sum 1..x = x*(x+1)/2, Sum x..n = n*(n+1)/2 - (x-1)*x/2 */
    long long totalSum = (long long)n * (n + 1) / 2;
    int pivot = -1;
    for (int x = 1; x <= n; x++) {
        long long left = (long long)x * (x + 1) / 2;
        long long right = totalSum - left + x;
        if (left == right) { pivot = x; break; }
    }
    printf("%d\n", pivot);
    return 0;
}