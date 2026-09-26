/*
 * Q114 (Logic Enhancers)
 *
 * Find the length of the longest substring without repeating characters.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1024];
    printf("Enter a string: ");
    if (fgets(s, sizeof(s), stdin) == NULL) {
        fprintf(stderr, "Input error.\n");
        return 1;
    }

    int len = 0;
    while (s[len] && s[len] != '\n') len++;
    s[len] = '\0';

    int freq[256] = {0};
    int left = 0, maxLen = 0;

    for (int right = 0; right < len; right++) {
        freq[(unsigned char)s[right]]++;
        while (freq[(unsigned char)s[right]] > 1) {
            freq[(unsigned char)s[left]]--;
            left++;
        }
        if (right - left + 1 > maxLen) maxLen = right - left + 1;
    }
    printf("%d\n", maxLen);
    return 0;
}