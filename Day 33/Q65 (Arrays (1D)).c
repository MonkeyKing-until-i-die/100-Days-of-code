/*
 * Q65 (Arrays (1D))
 *
 * Search in a sorted array using binary search.
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
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            fprintf(stderr, "Invalid input.\n");
            return 1;
        }
    }

    int key;
    printf("Enter element to search: ");
    if (scanf("%d", &key) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            result = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (result >= 0) {
        printf("Found at index %d\n", result);
    } else {
        printf("-1\n");
    }
    return 0;
}