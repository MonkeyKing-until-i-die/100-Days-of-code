/*
 * Q156 (Pointers)
 *
 * Write a program to find the length of a string using a pointer.
 */

#include <stdio.h>

int main(void) {
    char str[1024];
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) { fprintf(stderr, "Input error.\n"); return 1; }

    char *p = str;
    int len = 0;
    while (*p && *p != '\n') { len++; p++; }

    printf("%d\n", len);
    return 0;
}