/*
 * Q120 (File Handling)
 *
 * Take a string input and convert it to sentence case (first letter of each word capitalised).
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char str[1024];
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) { fprintf(stderr, "Input error.\n"); return 1; }

    int newWord = 1;
    for (int i = 0; str[i] && str[i] != '\n'; i++) {
        if (str[i] == ' ') {
            printf(" ");
            newWord = 1;
        } else {
            if (newWord) {
                printf("%c", toupper((unsigned char)str[i]));
                newWord = 0;
            } else {
                printf("%c", tolower((unsigned char)str[i]));
            }
        }
    }
    printf("\n");
    return 0;
}