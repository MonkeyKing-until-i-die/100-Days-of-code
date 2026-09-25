/*
 * Q111 (Logic Enhancers)
 *
 * Find the first negative integer in each sliding window of size k. Print 0 if none.
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
        int firstNeg = 0;
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) { firstNeg = arr[j]; break; }
        }
        printf("%d ", firstNeg);
    }
    printf("\n");
    return 0;
}