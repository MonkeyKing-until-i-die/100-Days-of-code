/*
 * Q91 (Strings)
 *
 * Remove all vowels from a string.
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

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char c = (char)tolower((unsigned char)str[i]);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            printf("%c", str[i]);
        }
    }
    printf("\n");
    return 0;
}