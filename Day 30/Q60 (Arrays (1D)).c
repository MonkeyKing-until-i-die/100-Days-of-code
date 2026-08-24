/*
 * Q60 (Arrays (1D))
 *
 * Count positive, negative, and zero elements in an array.
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

    int posCount = 0, negCount = 0, zeroCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)      posCount++;
        else if (arr[i] < 0) negCount++;
        else                 zeroCount++;
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", posCount, negCount, zeroCount);
    return 0;
}