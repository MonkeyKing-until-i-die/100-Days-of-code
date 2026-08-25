/*
 * Q62 (Arrays (1D))
 *
 * Reverse an array without taking extra space.
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

    int left = 0;
    int right = n - 1;
    while (left < right) {
        int temp  = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
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