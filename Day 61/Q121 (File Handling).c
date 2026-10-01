/*
 * Q121 (File Handling)
 *
 * Create a text file info.txt, write user name and age using fprintf(), confirm success.
 */

#include <stdio.h>

int main(void) {
    char name[256];
    int age;

    printf("Enter name: ");
    if (fgets(name, sizeof(name), stdin) == NULL) { fprintf(stderr, "Input error.\n"); return 1; }

    int nl = 0;
    while (name[nl] && name[nl] != '\n') nl++;
    name[nl] = '\0';

    printf("Enter age: ");
    if (scanf("%d", &age) != 1) { fprintf(stderr, "Invalid age.\n"); return 1; }

    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) { fprintf(stderr, "Could not create file.\n"); return 1; }

    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");
    return 0;
}