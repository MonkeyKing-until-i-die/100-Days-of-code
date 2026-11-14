/*
 * Q194 (Miscellaneous)
 *
 * Write a program to convert a hexadecimal string to its decimal equivalent.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char hex[64];
    printf("Enter a hexadecimal string: ");
    if (scanf("%63s", hex) != 1) { fprintf(stderr, "Invalid.\n"); return 1; }

    long long decimal = 0;
    int len = (int)strlen(hex);
    for (int i = 0; i < len; i++) {
        char c = (char)toupper((unsigned char)hex[i]);
        int val;
        if (c >= '0' && c <= '9') val = c - '0';
        else if (c >= 'A' && c <= 'F') val = c - 'A' + 10;
        else { fprintf(stderr, "Invalid hex character.\n"); return 1; }
        decimal = decimal * 16 + val;
    }
    printf("%lld\n", decimal);
    return 0;
}