/*
 * Q140 (Enum)
 *
 * Define a struct with an enum Gender field and print the person's gender.
 */

#include <stdio.h>

typedef enum { MALE, FEMALE, OTHER } Gender;

typedef struct {
    char   name[64];
    int    age;
    Gender gender;
} Person;

int main(void) {
    Person p;
    char gStr[16];
    printf("Enter name age gender(MALE/FEMALE/OTHER): ");
    if (scanf("%63s %d %15s", p.name, &p.age, gStr) != 3) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }
    if (gStr[0]=='M') p.gender = MALE;
    else if (gStr[0]=='F') p.gender = FEMALE;
    else p.gender = OTHER;

    const char *gLabels[] = {"Male", "Female", "Other"};
    printf("Name: %s | Age: %d | Gender: %s\n", p.name, p.age, gLabels[p.gender]);
    return 0;
}