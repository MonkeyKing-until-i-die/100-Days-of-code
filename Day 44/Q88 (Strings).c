/*
 * Q88 (Strings)
 *
 * Replace spaces with hyphens in a string.
 */

#include <stdio.h>

int main(void) {
    char str[1024];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        fprintf(stderr, "Input error.\n");
        return 1;
    }

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        printf("%c", str[i] == ' ' ? '-' : str[i]);
    }
    printf("\n");
    return 0;
}