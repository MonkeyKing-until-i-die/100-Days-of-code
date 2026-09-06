/*
 * Q81 (Strings)
 *
 * Count characters in a string without using built-in length functions.
 */

#include <stdio.h>

int main(void) {
    char str[1024];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        fprintf(stderr, "Input error.\n");
        return 1;
    }

    int count = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        count++;
    }

    printf("%d\n", count);
    return 0;
}