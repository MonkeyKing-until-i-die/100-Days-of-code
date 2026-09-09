/*
 * Q86 (Strings)
 *
 * Check if a string is a palindrome.
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char str[1024];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        fprintf(stderr, "Input error.\n");
        return 1;
    }

    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') len++;

    int isPalin = 1;
    int left = 0, right = len - 1;
    while (left < right) {
        if (tolower((unsigned char)str[left]) != tolower((unsigned char)str[right])) {
            isPalin = 0;
            break;
        }
        left++;
        right--;
    }

    printf("%s\n", isPalin ? "Palindrome" : "Not palindrome");
    return 0;
}