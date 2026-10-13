/*
 * Q142 (Structures)
 *
 * Store details of 5 students in an array of structures and print all.
 */

#include <stdio.h>
#define N 5

typedef struct {
    char  name[64];
    int   roll;
    float marks;
} Student;

int main(void) {
    Student students[N];
    for (int i = 0; i < N; i++) {
        printf("Student %d — Name Roll Marks: ", i + 1);
        if (scanf("%63s %d %f", students[i].name, &students[i].roll, &students[i].marks) != 3) {
            fprintf(stderr, "Invalid input for student %d.\n", i + 1);
            return 1;
        }
    }
    printf("\n%-20s %-8s %-8s\n", "Name", "Roll", "Marks");
    for (int i = 0; i < N; i++) {
        printf("%-20s %-8d %-8.0f\n", students[i].name, students[i].roll, students[i].marks);
    }
    return 0;
}