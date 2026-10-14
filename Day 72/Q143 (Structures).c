/*
 * Q143 (Structures)
 *
 * Find and print the student with the highest marks from an array of structures.
 */

#include <stdio.h>
#define MAX 100

typedef struct {
    char  name[64];
    int   roll;
    float marks;
} Student;

int main(void) {
    int n;
    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) { fprintf(stderr, "Invalid.\n"); return 1; }

    Student stu[MAX];
    for (int i = 0; i < n; i++) {
        printf("Name Roll Marks: ");
        scanf("%63s %d %f", stu[i].name, &stu[i].roll, &stu[i].marks);
    }

    int topIdx = 0;
    for (int i = 1; i < n; i++)
        if (stu[i].marks > stu[topIdx].marks) topIdx = i;

    printf("Topper: %s (Marks: %.0f)\n", stu[topIdx].name, stu[topIdx].marks);
    return 0;
}