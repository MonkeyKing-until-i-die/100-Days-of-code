/*
 * Q96 (Strings)
 *
 * Reverse each word in a sentence without changing the word order.
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

    int i = 0;
    while (sentence[i] != '\0' && sentence[i] != '\n') {
        int start = i;
        while (sentence[i] != ' ' && sentence[i] != '\0' && sentence[i] != '\n') i++;
        int end = i - 1;

        /* Reverse the word in place */
        while (start < end) {
            char tmp = sentence[start];
            sentence[start] = sentence[end];
            sentence[end] = tmp;
            start++;
            end--;
        }
        if (sentence[i] == ' ') { printf(" "); i++; }
    }
    printf("\n");
    return 0;
}