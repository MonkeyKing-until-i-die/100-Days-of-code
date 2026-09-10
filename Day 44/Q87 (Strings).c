/*
 * Q87 (Strings)
 *
 * Count spaces, digits, and special characters in a string.
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char str[1024];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        fprintf(stderr, "Input error.\n");
        return 1;
    }

    int spaces = 0, digits = 0, special = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == ' ')                     spaces++;
        else if (isdigit((unsigned char)str[i])) digits++;
        else if (!isalpha((unsigned char)str[i])) special++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}