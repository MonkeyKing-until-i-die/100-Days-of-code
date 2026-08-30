/*
 * Q69 (Arrays (1D))
 *
 * Find the second largest element in an array.
 */
#include <stdio.h>
#define MAX 1000

int main(void) {
    int n;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n < 2 || n > MAX) {
        fprintf(stderr, "Invalid input. n must be at least 2.\n");
        return 1;
    }

    int arr[MAX];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            fprintf(stderr, "Invalid input.\n");
            return 1;
        }
    }

    int maxVal = arr[0];
    int secondMax = arr[0] < arr[1] ? arr[0] : arr[1];
    if (arr[1] > maxVal) {
        secondMax = maxVal;
        maxVal = arr[1];
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > maxVal) {
            secondMax = maxVal;
            maxVal = arr[i];
        } else if (arr[i] > secondMax && arr[i] != maxVal) {
            secondMax = arr[i];
        }
    }

    printf("%d\n", secondMax);
    return 0;
}