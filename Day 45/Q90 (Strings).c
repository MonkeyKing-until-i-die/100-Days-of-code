/*
 * Q90 (Strings)
 *
 * Toggle case of each character in a string.
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
        if (isupper((unsigned char)str[i]))
            printf("%c", tolower((unsigned char)str[i]));
        else if (islower((unsigned char)str[i]))
            printf("%c", toupper((unsigned char)str[i]));
        else
            printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}