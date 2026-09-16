/*
 * Q97 (Strings)
 *
 * Print the initials of a name.
 */

#include <stdio.h>

int main(void) {
    char name[512];

    printf("Enter full name: ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        fprintf(stderr, "Input error.\n");
        return 1;
    }

    int i = 0;
    int printedFirst = 0;
    while (name[i] != '\0' && name[i] != '\n') {
        if (i == 0 || name[i - 1] == ' ') {
            if (printedFirst) printf(".");
            printf("%c", name[i]);
            printedFirst = 1;
        }
        i++;
    }
    printf(".\n");
    return 0;
}