/*
 * Q147 (Structures)
 *
 * Store employee data in a binary file using fwrite() and read using fread().
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[64];
    int  id;
    float salary;
} Employee;

int main(void) {
    Employee emp;
    printf("Enter name id salary: ");
    if (scanf("%63s %d %f", emp.name, &emp.id, &emp.salary) != 3) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    FILE *fp = fopen("employee.bin", "wb");
    if (!fp) { fprintf(stderr, "Cannot open file.\n"); return 1; }
    fwrite(&emp, sizeof(Employee), 1, fp);
    fclose(fp);

    Employee read;
    fp = fopen("employee.bin", "rb");
    if (!fp) { fprintf(stderr, "Cannot re-open file.\n"); return 1; }
    fread(&read, sizeof(Employee), 1, fp);
    fclose(fp);

    printf("Name: %s | ID: %d | Salary: %.2f\n", read.name, read.id, read.salary);
    return 0;
}