/*
 * Q157 (Pointers)
 *
 * Write a program to copy one string to another using pointers.
 */

#include <stdio.h>

int main(void) {
    char src[512], dst[512];
    printf("Enter source string: ");
    if (fgets(src, sizeof(src), stdin) == NULL) { fprintf(stderr, "Input error.\n"); return 1; }

    char *s = src, *d = dst;
    while (*s && *s != '\n') *d++ = *s++;
    *d = '\0';

    printf("Copied: %s\n", dst);
    return 0;
}