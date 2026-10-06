/*
 * Q130 (File Handling)
 *
 * Store multiple student records in a file using fprintf() and read them back using fscanf().
 */

#include <stdio.h>

typedef struct {
    char name[64];
    int  roll;
    int  marks;
} Student;

int main(void) {
    int n;
    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n < 1) { fprintf(stderr, "Invalid.\n"); return 1; }
    getchar();

    FILE *fp = fopen("students.txt", "w");
    if (!fp) { fprintf(stderr, "Cannot open file.\n"); return 1; }

    for (int i = 0; i < n; i++) {
        Student s;
        printf("Name Roll Marks: ");
        fscanf(stdin, "%63s %d %d", s.name, &s.roll, &s.marks);
        fprintf(fp, "%s %d %d\n", s.name, s.roll, s.marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (!fp) { fprintf(stderr, "Cannot re-open file.\n"); return 1; }
    Student s;
    while (fscanf(fp, "%63s %d %d", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
    }
    fclose(fp);
    return 0;
}