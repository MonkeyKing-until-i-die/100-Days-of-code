/*
 * Q4 (User Inputs, Operations & Output)
 *
 * Write a program to calculate the area and circumference of a circle given its radius.
 */
#include <stdio.h>
#define PI 3.14159265358979323846

int main(void) {
    double radius;

    printf("Enter radius: ");
    if (scanf("%lf", &radius) != 1 || radius < 0) {
        fprintf(stderr, "Invalid input. Radius must be non-negative.\n");
        return 1;
    }

    double area = PI * radius * radius;
    double circumference = 2 * PI * radius;

    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);
    return 0;
}