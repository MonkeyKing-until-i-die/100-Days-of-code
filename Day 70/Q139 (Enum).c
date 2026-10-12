/*
 * Q139 (Enum)
 *
 * Show that enums store integers by printing assigned values for SUCCESS, FAILURE, TIMEOUT.
 */

#include <stdio.h>

typedef enum { SUCCESS=0, FAILURE=1, TIMEOUT=2 } Status;

int main(void) {
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);
    return 0;
}