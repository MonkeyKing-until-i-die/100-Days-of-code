/*
 * Q134 (Enum)
 *
 * Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
 */

#include <stdio.h>

typedef enum { SUCCESS, FAILURE, TIMEOUT } Status;

int main(void) {
    char input[16];
    printf("Enter status (SUCCESS/FAILURE/TIMEOUT): ");
    if (scanf("%15s", input) != 1) { fprintf(stderr, "Invalid input.\n"); return 1; }

    Status s;
    if (input[0]=='S') s = SUCCESS;
    else if (input[0]=='F') s = FAILURE;
    else s = TIMEOUT;

    switch (s) {
        case SUCCESS: printf("Operation succeeded\n"); break;
        case FAILURE: printf("Operation failed\n");    break;
        case TIMEOUT: printf("Operation timed out\n"); break;
    }
    return 0;
}