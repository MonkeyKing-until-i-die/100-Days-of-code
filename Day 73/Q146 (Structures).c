/*
 * Q146 (Structures)
 *
 * Create an Employee structure with a nested Date structure for joining date and print details.
 */

#include <stdio.h>

typedef struct {
    int day, month, year;
} Date;

typedef struct {
    char name[64];
    int  id;
    Date joiningDate;
} Employee;

int main(void) {
    Employee emp;
    printf("Enter name ID day month year: ");
    if (scanf("%63s %d %d %d %d", emp.name, &emp.id,
              &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year) != 5) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           emp.name, emp.id,
           emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);
    return 0;
}