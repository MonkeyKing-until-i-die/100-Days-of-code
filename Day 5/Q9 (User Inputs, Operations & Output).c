/*
 * Q9 (User Inputs, Operations & Output)
 *
 * Write a program to calculate simple and compound interest for given principal, rate, and time.
 */
#include <stdio.h>
#include <math.h>

int main(void) {
    double principal, rate, time;

    printf("Enter principal, rate, and time: ");
    if (scanf("%lf %lf %lf", &principal, &rate, &time) != 3
        || principal < 0 || rate < 0 || time < 0) {
        fprintf(stderr, "Invalid input. All values must be non-negative.\n");
        return 1;
    }

    double si = (principal * rate * time) / 100.0;
    double ci = principal * (pow(1.0 + rate / 100.0, time) - 1.0);

    printf("Simple Interest=%.0f, Compound Interest=%.2f\n", si, ci);
    return 0;
}