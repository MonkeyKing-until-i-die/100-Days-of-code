/*
 * Q136 (Enum)
 *
 * Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
 */

#include <stdio.h>

typedef enum { ADD, SUBTRACT, MULTIPLY } Op;

int main(void) {
    char opStr[16];
    int a, b;
    printf("Enter operation (ADD/SUBTRACT/MULTIPLY) and two numbers: ");
    if (scanf("%15s %d %d", opStr, &a, &b) != 3) { fprintf(stderr, "Invalid input.\n"); return 1; }

    Op op;
    if (opStr[0]=='A') op = ADD;
    else if (opStr[1]=='U') op = SUBTRACT;
    else op = MULTIPLY;

    switch (op) {
        case ADD:      printf("%d\n", a + b); break;
        case SUBTRACT: printf("%d\n", a - b); break;
        case MULTIPLY: printf("%d\n", a * b); break;
    }
    return 0;
}