/*
 * Q3 (User Inputs, Operations & Output)
 *
 * Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
 */
#include <stdio.h>

int main(void) {
    double length, breadth;

    printf("Enter length and breadth: ");
    if (scanf("%lf %lf", &length, &breadth) != 2 || length <= 0 || breadth <= 0) {
        fprintf(stderr, "Invalid input. Length and breadth must be positive.\n");
        return 1;
    }

    double area = length * breadth;
    double perimeter = 2 * (length + breadth);

    printf("Area=%.0f, Perimeter=%.0f\n", area, perimeter);
    return 0;
}