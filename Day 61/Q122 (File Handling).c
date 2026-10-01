/*
 * Q122 (File Handling)
 *
 * Open an existing file and read its contents line by line using fgets() until EOF.
 */

#include <stdio.h>

int main(void) {
    FILE *fp = fopen("info.txt", "r");
    if (fp == NULL) {
        fprintf(stderr, "Error: Cannot open info.txt\n");
        return 1;
    }

    char line[512];
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }
    fclose(fp);
    return 0;
}