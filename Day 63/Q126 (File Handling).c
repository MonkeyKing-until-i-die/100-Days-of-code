/*
 * Q126 (File Handling)
 *
 * Check if a file exists; if so read and display its content, otherwise print an error message.
 */

#include <stdio.h>

int main(void) {
    char filename[256];
    printf("Enter filename: ");
    if (scanf("%255s", filename) != 1) { fprintf(stderr, "Invalid input.\n"); return 1; }

    FILE *fp = fopen(filename, "r");
    if (!fp) { printf("Error: File does not exist!\n"); return 0; }

    printf("File opened successfully.\n");
    char line[512];
    while (fgets(line, sizeof(line), fp)) printf("%s", line);
    fclose(fp);
    return 0;
}