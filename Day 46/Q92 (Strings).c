/*
 * Q92 (Strings)
 *
 * Find the first repeating lowercase alphabet in a string.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1024];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        fprintf(stderr, "Input error.\n");
        return 1;
    }

    int freq[26] = {0};
    char firstRepeat = '\0';

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        }
    }

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' && freq[str[i] - 'a'] > 1) {
            firstRepeat = str[i];
            break;
        }
    }

    if (firstRepeat) printf("%c\n", firstRepeat);
    else             printf("No repeating character\n");

    return 0;
}