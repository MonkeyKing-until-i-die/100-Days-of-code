/*
 * Q56 (Arrays (1D))
 *
 * Read and print elements of a one-dimensional array.
 */
#include <stdio.h>
#define MAX 1000

int main(void) {
    int n;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) {
        fprintf(stderr, "Invalid input. n must be between 1 and %d.\n", MAX);
        return 1;
    }

    int arr[MAX];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            fprintf(stderr, "Invalid input at element %d.\n", i + 1);
            return 1;
        }
    }

    for (int i = 0; i < n; i++) {
        if (i < n - 1) {
            printf("%d ", arr[i]);
        } else {
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}