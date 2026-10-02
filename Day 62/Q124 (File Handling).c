/*
 * Q124 (File Handling)
 *
 * Copy all content from a source file to a destination file using fgetc() and fputc().
 */

#include <stdio.h>

int main(void) {
    char src[256], dst[256];
    printf("Enter source filename: ");
    if (scanf("%255s", src) != 1) { fprintf(stderr, "Invalid input.\n"); return 1; }
    printf("Enter destination filename: ");
    if (scanf("%255s", dst) != 1) { fprintf(stderr, "Invalid input.\n"); return 1; }

    FILE *in = fopen(src, "r");
    if (!in) { fprintf(stderr, "Cannot open source.\n"); return 1; }
    FILE *out = fopen(dst, "w");
    if (!out) { fclose(in); fprintf(stderr, "Cannot open destination.\n"); return 1; }

    int c;
    while ((c = fgetc(in)) != EOF) fputc(c, out);

    fclose(in);
    fclose(out);
    printf("File copied successfully to %s\n", dst);
    return 0;
}