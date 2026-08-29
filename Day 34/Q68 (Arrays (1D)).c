/*
 * Q68 (Arrays (1D))
 *
 * Delete an element from an array.
 */
#include <stdio.h>
#define MAX 1000

int main(void) {
    int n;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) {
        fprintf(stderr, "Invalid input.\n");
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

    int pos;
    printf("Enter position to delete (1-based): ");
    if (scanf("%d", &pos) != 1 || pos < 1 || pos > n) {
        fprintf(stderr, "Invalid position.\n");
        return 1;
    }

    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    for (int i = 0; i < n; i++) {
        if (i < n - 1) {
            printf("%d ", arr[i]);
        } else {
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}