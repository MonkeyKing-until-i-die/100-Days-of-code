/*
 * Q193 (Miscellaneous)
 *
 * Write a program to convert a decimal number to hexadecimal without using built-in functions.
 */

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1 || n < 0) { fprintf(stderr, "Invalid.\n"); return 1; }

    if (n == 0) { printf("0\n"); return 0; }

    char hex[32];
    int idx = 0;
    while (n > 0) {
        int rem = n % 16;
        hex[idx++] = (char)(rem < 10 ? '0' + rem : 'A' + rem - 10);
        n /= 16;
    }
    for (int i = idx - 1; i >= 0; i--) printf("%c", hex[i]);
    printf("\n");
    return 0;
}