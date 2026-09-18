/*
 * Q101 (Logic Enhancers)
 *
 * Find the first and last occurrence of a target in a sorted array. Print -1,-1 if not found.
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

    int target;
    printf("Enter target: ");
    scanf("%d", &target);

    int first = -1, last = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            if (first == -1) first = i;
            last = i;
        }
    }
    printf("%d,%d\n", first, last);
    return 0;
}