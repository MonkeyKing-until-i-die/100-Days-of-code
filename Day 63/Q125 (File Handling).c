/*
 * Q125 (File Handling)
 *
 * Open a file in append mode and append a new line of text without overwriting existing content.
 */

#include <stdio.h>

int main(void) {
    char filename[256];
    printf("Enter filename: ");
    if (scanf("%255s", filename) != 1) { fprintf(stderr, "Invalid input.\n"); return 1; }

    getchar(); /* consume newline */
    char text[1024];
    printf("Enter text to append: ");
    if (fgets(text, sizeof(text), stdin) == NULL) { fprintf(stderr, "Input error.\n"); return 1; }

    FILE *fp = fopen(filename, "a");
    if (!fp) { fprintf(stderr, "Cannot open file.\n"); return 1; }

    fputs(text, fp);
    fclose(fp);
    printf("File updated successfully with appended text.\n");
    return 0;
}