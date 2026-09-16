/*
 * Q98 (Strings)
 *
 * Print initials of a name with the surname displayed in full.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char name[512];

    printf("Enter full name (First [Middle] Last): ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        fprintf(stderr, "Input error.\n");
        return 1;
    }

    char parts[10][128];
    int  count = 0;
    char *token = strtok(name, " \n");
    while (token && count < 10) {
        strncpy(parts[count++], token, 127);
        token = strtok(NULL, " \n");
    }

    if (count < 2) {
        printf("%s\n", parts[0]);
        return 0;
    }

    for (int i = 0; i < count - 1; i++) {
        printf("%c.", parts[i][0]);
    }
    printf(" %s\n", parts[count - 1]);
    return 0;
}