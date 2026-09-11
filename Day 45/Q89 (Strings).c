/*
 * Q89 (Strings)
 *
 * Count frequency of a given character in a string.
 */

#include <stdio.h>

int main(void) {
    char str[1024];
    char ch;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        fprintf(stderr, "Input error.\n");
        return 1;
    }

    printf("Enter character to count: ");
    if (scanf(" %c", &ch) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    int count = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == ch) count++;
    }

    printf("%d\n", count);
    return 0;
}