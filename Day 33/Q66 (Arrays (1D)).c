/*
 * Q66 (Arrays (1D))
 *
 * Insert an element in a sorted array at the appropriate position.
 */
#include <stdio.h>
#define MAX 1001

int main(void) {
    int n;

    printf("Enter number of elements in sorted array: ");
    if (scanf("%d", &n) != 1 || n < 1 || n >= MAX) {
        fprintf(stderr, "Invalid input. n must be between 1 and %d.\n", MAX - 1);
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
    printf("Enter element to insert: ");
    if (scanf("%d", &key) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    int pos = n;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= key) {
            pos = i;
            break;
        }
    }

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = key;
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