/*
 * Q135 (Enum)
 *
 * Assign explicit enum values starting from 10 and print them.
 */

#include <stdio.h>

typedef enum { A=10, B, C } MyEnum;

int main(void) {
    printf("A=%d\nB=%d\nC=%d\n", A, B, C);
    return 0;
}