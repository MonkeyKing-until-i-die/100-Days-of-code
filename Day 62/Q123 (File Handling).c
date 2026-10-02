/*
 * Q123 (File Handling)
 *
 * Read a text file and count total characters, words, and lines.
 */

#include <stdio.h>

int main(void) {
    char filename[256];
    printf("Enter filename: ");
    if (scanf("%255s", filename) != 1) { fprintf(stderr, "Invalid input.\n"); return 1; }

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) { fprintf(stderr, "Cannot open file.\n"); return 1; }

    long chars = 0, words = 0, lines = 0;
    int inWord = 0;
    int c;
    while ((c = fgetc(fp)) != EOF) {
        chars++;
        if (c == '\n') lines++;
        if (c == ' ' || c == '\n' || c == '\t') { inWord = 0; }
        else { if (!inWord) { words++; inWord = 1; } }
    }
    fclose(fp);
    printf("Characters: %ld\nWords: %ld\nLines: %ld\n", chars, words, lines);
    return 0;
}