/*
 * Q85 (Strings)
 *
 * Reverse a string.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1024];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        fprintf(stderr, "Input error.\n");
        return 1;
    }

    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') len++;

    int left = 0, right = len - 1;
    while (left < right) {
        char tmp   = str[left];
        str[left]  = str[right];
        str[right] = tmp;
        left++;
        right--;
    }
    str[len] = '\0';

    printf("%s\n", str);
    return 0;
}