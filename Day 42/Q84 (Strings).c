/*
 * Q84 (Strings)
 *
 * Convert a lowercase string to uppercase without using built-in functions.
 */

#include <stdio.h>

int main(void) {
    char str[1024];

    printf("Enter a lowercase string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        fprintf(stderr, "Input error.\n");
        return 1;
    }

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            printf("%c", str[i] - 32);
        } else {
            printf("%c", str[i]);
        }
    }
    printf("\n");
    return 0;
}