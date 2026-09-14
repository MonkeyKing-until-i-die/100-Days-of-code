/*
 * Q93 (Strings)
 *
 * Check if two strings are anagrams of each other.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[512], s2[512];

    printf("Enter first string: ");
    if (fgets(s1, sizeof(s1), stdin) == NULL) {
        fprintf(stderr, "Input error.\n");
        return 1;
    }
    printf("Enter second string: ");
    if (fgets(s2, sizeof(s2), stdin) == NULL) {
        fprintf(stderr, "Input error.\n");
        return 1;
    }

    int len1 = 0, len2 = 0;
    while (s1[len1] && s1[len1] != '\n') len1++;
    while (s2[len2] && s2[len2] != '\n') len2++;

    if (len1 != len2) {
        printf("Not anagrams\n");
        return 0;
    }

    int freq[256] = {0};
    for (int i = 0; i < len1; i++) freq[(unsigned char)s1[i]]++;
    for (int i = 0; i < len2; i++) freq[(unsigned char)s2[i]]--;

    int isAnagram = 1;
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) { isAnagram = 0; break; }
    }

    printf("%s\n", isAnagram ? "Anagrams" : "Not anagrams");
    return 0;
}