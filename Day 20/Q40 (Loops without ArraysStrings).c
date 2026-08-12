/*
 * Q40 (Loops without Arrays/Strings)
 *
 * Write a program to find the 1's complement of a binary number and print it.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char binary[65];

    printf("Enter a binary number: ");
    if (scanf("%64s", binary) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    size_t len = strlen(binary);
    for (size_t i = 0; i < len; i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            fprintf(stderr, "Input must contain only 0s and 1s.\n");
            return 1;
        }
        printf("%c", binary[i] == '0' ? '1' : '0');
    }
    printf("\n");
    return 0;
}