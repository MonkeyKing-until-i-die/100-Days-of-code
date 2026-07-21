/*
 * Q5 (User Inputs, Operations & Output)
 *
 * Write a program to convert temperature from Celsius to Fahrenheit.
 */
#include <stdio.h>

int main(void) {
    double celsius;

    printf("Enter temperature in Celsius: ");
    if (scanf("%lf", &celsius) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    printf("Fahrenheit=%.0f\n", fahrenheit);
    return 0;
}