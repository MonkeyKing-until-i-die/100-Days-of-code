/*
 * Q15 (Conditional Statements)
 *
 * Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
 */
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;

    printf("Enter a character: ");
    if (scanf(" %c", &ch) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    if (isupper((unsigned char)ch)) {
        printf("Uppercase alphabet\n");
    } else if (islower((unsigned char)ch)) {
        printf("Lowercase alphabet\n");
    } else if (isdigit((unsigned char)ch)) {
        printf("Digit\n");
    } else {
        printf("Special character\n");
    }
    return 0;
}