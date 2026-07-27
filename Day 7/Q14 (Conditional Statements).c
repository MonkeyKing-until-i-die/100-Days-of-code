/*
 * Q14 (Conditional Statements)
 *
 * Write a program to input a character and check whether it is a vowel or consonant using if-else.
 */
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;

    printf("Enter a character: ");
    if (scanf(" %c", &ch) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    ch = (char)tolower((unsigned char)ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("Vowel\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Consonant\n");
    } else {
        printf("Not an alphabet\n");
    }
    return 0;
}