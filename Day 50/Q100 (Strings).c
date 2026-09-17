/*
 * Q100 (Strings)
 *
 * Print all sub-strings of a string.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[256];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        fprintf(stderr, "Input error.\n");
        return 1;
    }

    int len = 0;
    while (str[len] && str[len] != '\n') len++;
    str[len] = '\0';

    int first = 1;
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j <= len; j++) {
            if (!first) printf(",");
            for (int k = i; k < j; k++) printf("%c", str[k]);
            first = 0;
        }
    }
    printf("\n");
    return 0;
}