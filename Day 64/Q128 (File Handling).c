/*
 * Q128 (File Handling)
 *
 * Read a text file and count how many vowels and consonants it contains.
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char filename[256];
    printf("Enter filename: ");
    if (scanf("%255s", filename) != 1) { fprintf(stderr, "Invalid input.\n"); return 1; }

    FILE *fp = fopen(filename, "r");
    if (!fp) { fprintf(stderr, "Cannot open file.\n"); return 1; }

    int vowels = 0, consonants = 0, c;
    while ((c = fgetc(fp)) != EOF) {
        char ch = (char)tolower(c);
        if (ch == 'a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') vowels++;
        else if (ch >= 'a' && ch <= 'z') consonants++;
    }
    fclose(fp);
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}