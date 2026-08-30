/*
 * Q70 (Arrays (1D))
 *
 * Rotate an array to the right by k positions.
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

    int k;
    printf("Enter rotation amount k: ");
    if (scanf("%d", &k) != 1 || k < 0) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    k = k % n;

    int rotated[MAX];
    for (int i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (i < n - 1) {
            printf("%d ", rotated[i]);
        } else {
            printf("%d\n", rotated[i]);
        }
    }
    return 0;
}