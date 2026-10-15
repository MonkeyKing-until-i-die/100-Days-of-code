/*
 * Q145 (Structures)
 *
 * Return a structure containing the top student's details from a function.
 */

#include <stdio.h>
#define MAX 100

typedef struct {
    char  name[64];
    int   roll;
    float marks;
} Student;

static Student getTopper(Student arr[], int n) {
    Student top = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i].marks > top.marks) top = arr[i];
    return top;
}

int main(void) {
    int n;
    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) { fprintf(stderr, "Invalid.\n"); return 1; }

    Student arr[MAX];
    for (int i = 0; i < n; i++) {
        printf("Name Roll Marks: ");
        scanf("%63s %d %f", arr[i].name, &arr[i].roll, &arr[i].marks);
    }

    Student top = getTopper(arr, n);
    printf("Top Student: %s | Roll: %d | Marks: %.0f\n", top.name, top.roll, top.marks);
    return 0;
}