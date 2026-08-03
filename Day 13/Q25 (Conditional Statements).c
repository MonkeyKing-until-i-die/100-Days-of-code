/*
 * Q25 (Conditional Statements)
 *
 * Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
 */
#include <stdio.h>

int main(void) {
    int a, b;
    char op;

    printf("Enter two numbers and operator (e.g. 4 2 +): ");
    if (scanf("%d %d %c", &a, &b, &op) != 3) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b == 0) {
                fprintf(stderr, "Error: Division by zero.\n");
                return 1;
            }
            printf("%d\n", a / b);
            break;
        case '%':
            if (b == 0) {
                fprintf(stderr, "Error: Modulo by zero.\n");
                return 1;
            }
            printf("%d\n", a % b);
            break;
        default:
            fprintf(stderr, "Unknown operator '%c'.\n", op);
            return 1;
    }
    return 0;
}