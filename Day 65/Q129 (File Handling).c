/*
 * Q129 (File Handling)
 *
 * Read integers from a file, compute their sum and average, and print both.
 */

#include <stdio.h>

int main(void) {
    char filename[256];
    printf("Enter filename: ");
    if (scanf("%255s", filename) != 1) { fprintf(stderr, "Invalid input.\n"); return 1; }

    FILE *fp = fopen(filename, "r");
    if (!fp) { fprintf(stderr, "Cannot open file.\n"); return 1; }

    long long sum = 0; int n = 0, num;
    while (fscanf(fp, "%d", &num) == 1) { sum += num; n++; }
    fclose(fp);

    if (n == 0) { printf("No numbers found.\n"); return 0; }
    printf("Sum = %lld\nAverage = %.2f\n", sum, (double)sum / n);
    return 0;
}