/*
 * Q67 (Arrays (1D))
 *
 * Insert an element in an array at a given position.
 */
#include <stdio.h>
#define MAX 1001

int main(void) {
    int n;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n < 1 || n >= MAX) {
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

    int pos, val;
    printf("Enter position and value to insert: ");
    if (scanf("%d %d", &pos, &val) != 2 || pos < 1 || pos > n + 1) {
        fprintf(stderr, "Invalid position.\n");
        return 1;
    }

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = val;
    n++;

    for (int i = 0; i < n; i++) {
        if (i < n - 1) {
            printf("%d ", arr[i]);
        } else {
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}