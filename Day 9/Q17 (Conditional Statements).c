/*
 * Q17 (Conditional Statements)
 *
 * Write a program to find the roots of a quadratic equation and categorize them.
 */
#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c;

    printf("Enter coefficients a, b, c of quadratic equation: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    if (a == 0.0) {
        fprintf(stderr, "Coefficient a must not be zero.\n");
        return 1;
    }

    double discriminant = b * b - 4.0 * a * c;

    if (discriminant > 0.0) {
        double r1 = (-b + sqrt(discriminant)) / (2.0 * a);
        double r2 = (-b - sqrt(discriminant)) / (2.0 * a);
        printf("Roots are real and different: %.0f, %.0f\n", r1, r2);
    } else if (discriminant == 0.0) {
        double r = -b / (2.0 * a);
        printf("Roots are real and same: %.0f\n", r);
    } else {
        printf("Roots are complex\n");
    }
    return 0;
}