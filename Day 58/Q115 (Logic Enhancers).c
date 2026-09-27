/*
 * Q115 (Logic Enhancers)
 *
 * Determine if two strings are valid anagrams using character frequency.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[512], t[512];
    printf("Enter first string: ");
    if (fgets(s, sizeof(s), stdin) == NULL) { fprintf(stderr, "Input error.\n"); return 1; }
    printf("Enter second string: ");
    if (fgets(t, sizeof(t), stdin) == NULL) { fprintf(stderr, "Input error.\n"); return 1; }

    int ls = 0, lt = 0;
    while (s[ls] && s[ls] != '\n') ls++;
    while (t[lt] && t[lt] != '\n') lt++;

    if (ls != lt) { printf("Not Anagram\n"); return 0; }

    int freq[26] = {0};
    for (int i = 0; i < ls; i++) freq[s[i] - 'a']++;
    for (int i = 0; i < lt; i++) freq[t[i] - 'a']--;

    int ok = 1;
    for (int i = 0; i < 26; i++) if (freq[i] != 0) { ok = 0; break; }
    printf("%s\n", ok ? "Anagram" : "Not Anagram");
    return 0;
}