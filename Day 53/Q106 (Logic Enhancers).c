/*
 * Q106 (Logic Enhancers)
 *
 * Find the next greater element for each element in an array using brute force. Print -1 if none.
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

    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) { printf("%d", arr[j]); found = 1; break; }
        }
        if (!found) printf("-1");
        if (i < n - 1) printf(", ");
    }
    printf("\n");
    return 0;
}