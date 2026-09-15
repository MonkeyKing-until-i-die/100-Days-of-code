/*
 * Q95 (Strings)
 *
 * Check if one string is a rotation of another.
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
    s1[len1] = '\0';
    s2[len2] = '\0';

    if (len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }

    /* Concatenate s1 with itself and check if s2 is a substring */
    char doubled[1024];
    snprintf(doubled, sizeof(doubled), "%s%s", s1, s1);

    if (strstr(doubled, s2) != NULL) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }
    return 0;
}