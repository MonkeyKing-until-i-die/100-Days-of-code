/*
 * Q141 (Structures)
 *
 * Define a structure Student with name, roll_no, and marks, then read and print one student's data.
 */

#include <stdio.h>

typedef struct {
    char name[64];
    int  roll;
    float marks;
} Student;

int main(void) {
    Student s;
    printf("Enter name: ");
    if (scanf("%63s", s.name) != 1) { fprintf(stderr, "Invalid.\n"); return 1; }
    printf("Enter roll number: ");
    if (scanf("%d", &s.roll) != 1)  { fprintf(stderr, "Invalid.\n"); return 1; }
    printf("Enter marks: ");
    if (scanf("%f", &s.marks) != 1) { fprintf(stderr, "Invalid.\n"); return 1; }

    printf("Name: %s | Roll: %d | Marks: %.0f\n", s.name, s.roll, s.marks);
    return 0;
}