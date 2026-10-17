/*
 * Q148 (Structures)
 *
 * Take two struct instances as input and check if they are identical.
 */

#include <stdio.h>
#include <string.h>

typedef struct {
    char  name[64];
    int   roll;
    float marks;
} Student;

int main(void) {
    Student s1, s2;
    printf("Student 1 (name roll marks): ");
    if (scanf("%63s %d %f", s1.name, &s1.roll, &s1.marks) != 3) {
        fprintf(stderr, "Invalid.\n"); return 1;
    }
    printf("Student 2 (name roll marks): ");
    if (scanf("%63s %d %f", s2.name, &s2.roll, &s2.marks) != 3) {
        fprintf(stderr, "Invalid.\n"); return 1;
    }

    if (strcmp(s1.name, s2.name) == 0 && s1.roll == s2.roll && s1.marks == s2.marks) {
        printf("Same\n");
    } else {
        printf("Different\n");
    }
    return 0;
}