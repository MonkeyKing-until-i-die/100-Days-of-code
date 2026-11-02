/*
 * Q174 (Sorting)
 *
 * Write a program to sort an array of strings alphabetically using Bubble Sort.
 */

#include <stdio.h>
#include <string.h>
#define MAX 100

int main(void) {
    int n;
    printf("Enter number of strings: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) { fprintf(stderr, "Invalid.\n"); return 1; }
    getchar();

    char arr[MAX][256];
    for (int i = 0; i < n; i++) {
        printf("String %d: ", i+1);
        if (fgets(arr[i], 256, stdin) == NULL) { fprintf(stderr, "Input error.\n"); return 1; }
        int l = 0;
        while (arr[i][l] && arr[i][l] != '\n') l++;
        arr[i][l] = '\0';
    }

    /* Bubble sort on strings */
    char tmp[256];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(arr[j], arr[j+1]) > 0) {
                strncpy(tmp, arr[j], 255);
                strncpy(arr[j], arr[j+1], 255);
                strncpy(arr[j+1], tmp, 255);
            }
        }
    }

    printf("Sorted:\n");
    for (int i = 0; i < n; i++) printf("%s\n", arr[i]);
    return 0;
}