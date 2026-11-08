/*
 * Q184 (Functions)
 *
 * Write a program with a function to check if a string is a palindrome.
 */

#include <stdio.h>
#include <ctype.h>

static int isPalinStr(const char *s, int left, int right) {
    if (left >= right) return 1;
    if (tolower((unsigned char)s[left]) != tolower((unsigned char)s[right])) return 0;
    return isPalinStr(s, left + 1, right - 1);
}

int main(void) {
    char str[1024];
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) { fprintf(stderr, "Input error.\n"); return 1; }

    int len = 0;
    while (str[len] && str[len] != '\n') len++;
    str[len] = '\0';

    printf("%s\n", isPalinStr(str, 0, len - 1) ? "Palindrome" : "Not palindrome");
    return 0;
}