/*
 * Q127 (File Handling)
 *
 * Read text from input.txt, convert all lowercase to uppercase, and write result to output.txt.
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *in = fopen("input.txt", "r");
    if (!in) { fprintf(stderr, "Cannot open input.txt\n"); return 1; }
    FILE *out = fopen("output.txt", "w");
    if (!out) { fclose(in); fprintf(stderr, "Cannot open output.txt\n"); return 1; }

    int c;
    while ((c = fgetc(in)) != EOF) fputc(toupper(c), out);

    fclose(in); fclose(out);
    printf("Conversion complete. Result written to output.txt\n");
    return 0;
}