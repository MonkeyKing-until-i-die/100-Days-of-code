/*
 * Q57 (Arrays (1D))
 *
 * Find the sum of array elements.
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

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("%lld\n", sum);
    return 0;
}