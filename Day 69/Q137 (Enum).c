/*
 * Q137 (Enum)
 *
 * Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
 */

#include <stdio.h>

typedef enum { ADMIN, USER, GUEST } Role;

int main(void) {
    char input[16];
    printf("Enter role (ADMIN/USER/GUEST): ");
    if (scanf("%15s", input) != 1) { fprintf(stderr, "Invalid input.\n"); return 1; }

    Role r;
    if (input[0]=='A') r = ADMIN;
    else if (input[0]=='U') r = USER;
    else r = GUEST;

    switch (r) {
        case ADMIN: printf("Welcome Admin!\n"); break;
        case USER:  printf("Welcome User!\n");  break;
        case GUEST: printf("Welcome Guest!\n"); break;
    }
    return 0;
}