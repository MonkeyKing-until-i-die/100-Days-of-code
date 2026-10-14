/*
 * Q144 (Structures)
 *
 * Write a function that accepts a structure as a parameter and prints its members.
 */

#include <stdio.h>

typedef struct {
    char  name[64];
    int   roll;
    float marks;
} Student;

static void printStudent(Student s) {
    printf("Name: %s | Roll: %d | Marks: %.0f\n", s.name, s.roll, s.marks);
}

int main(void) {
    Student s;
    printf("Enter name roll marks: ");
    if (scanf("%63s %d %f", s.name, &s.roll, &s.marks) != 3) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }
    printStudent(s);
    return 0;
}