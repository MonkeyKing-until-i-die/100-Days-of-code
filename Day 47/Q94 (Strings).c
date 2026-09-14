/*
 * Q94 (Strings)
 *
 * Find the longest word in a sentence.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char sentence[1024];

    printf("Enter a sentence: ");
    if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
        fprintf(stderr, "Input error.\n");
        return 1;
    }

    char longestWord[512] = "";
    int  maxLen = 0;
    int  i = 0;

    while (sentence[i] != '\0' && sentence[i] != '\n') {
        char word[512];
        int  wlen = 0;

        while (sentence[i] != ' ' && sentence[i] != '\0' && sentence[i] != '\n') {
            word[wlen++] = sentence[i++];
        }
        word[wlen] = '\0';

        if (wlen > maxLen) {
            maxLen = wlen;
            strncpy(longestWord, word, sizeof(longestWord) - 1);
        }
        if (sentence[i] == ' ') i++;
    }

    printf("%s\n", longestWord);
    return 0;
}