/*
 * Q102 (Logic Enhancers)
 *
 * Find the index of the ceiling element in a sorted array for a given x. Print -1 if none exists.
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

    int x;
    printf("Enter x: ");
    scanf("%d", &x);

    int result = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) { result = i; break; }
    }
    printf("%d\n", result);
    return 0;
}