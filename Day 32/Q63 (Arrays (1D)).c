/*
 * Q63 (Arrays (1D))
 *
 * Merge two arrays.
 */
#include <stdio.h>
#define MAX 1000

int main(void) {
    int n1;

    printf("Enter size of first array: ");
    if (scanf("%d", &n1) != 1 || n1 < 1 || n1 > MAX) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    int arr1[MAX];
    printf("Enter %d elements: ", n1);
    for (int i = 0; i < n1; i++) {
        if (scanf("%d", &arr1[i]) != 1) {
            fprintf(stderr, "Invalid input.\n");
            return 1;
        }
    }

    int n2;
    printf("Enter size of second array: ");
    if (scanf("%d", &n2) != 1 || n2 < 1 || n2 + n1 > MAX) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    int arr2[MAX];
    printf("Enter %d elements: ", n2);
    for (int i = 0; i < n2; i++) {
        if (scanf("%d", &arr2[i]) != 1) {
            fprintf(stderr, "Invalid input.\n");
            return 1;
        }
    }

    int merged[MAX];
    int idx = 0;
    for (int i = 0; i < n1; i++) merged[idx++] = arr1[i];
    for (int i = 0; i < n2; i++) merged[idx++] = arr2[i];

    for (int i = 0; i < idx; i++) {
        if (i < idx - 1) {
            printf("%d ", merged[i]);
        } else {
            printf("%d\n", merged[i]);
        }
    }
    return 0;
}