/*
 * Q19 (Conditional Statements)
 *
 * Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
 */
#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Enter three side lengths: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3 || a <= 0 || b <= 0 || c <= 0) {
        fprintf(stderr, "Invalid input. Side lengths must be positive.\n");
        return 1;
    }

    if (a + b <= c || a + c <= b || b + c <= a) {
        fprintf(stderr, "These sides do not form a valid triangle.\n");
        return 1;
    }

    if (a == b && b == c) {
        printf("Equilateral\n");
    } else if (a == b || b == c || a == c) {
        printf("Isosceles\n");
    } else {
        printf("Scalene\n");
    }
    return 0;
}