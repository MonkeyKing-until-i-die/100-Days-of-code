/*
 * Q149 (Structures)
 *
 * Use malloc() to allocate structure memory dynamically and print details.
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char  name[64];
    int   roll;
    float marks;
} Student;

int main(void) {
    Student *s = (Student *)malloc(sizeof(Student));
    if (!s) { fprintf(stderr, "Memory allocation failed.\n"); return 1; }

    printf("Enter name roll marks: ");
    if (scanf("%63s %d %f", s->name, &s->roll, &s->marks) != 3) {
        fprintf(stderr, "Invalid input.\n");
        free(s);
        return 1;
    }

    printf("Name: %s | Roll: %d | Marks: %.0f\n", s->name, s->roll, s->marks);
    free(s);
    return 0;
}