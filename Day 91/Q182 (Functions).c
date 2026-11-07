/*
 * Q182 (Functions)
 *
 * Write a program with a function to convert Celsius to Fahrenheit and Fahrenheit to Celsius.
 */

#include <stdio.h>

static double celsiusToFahrenheit(double c) { return c * 9.0 / 5.0 + 32.0; }
static double fahrenheitToCelsius(double f) { return (f - 32.0) * 5.0 / 9.0; }

int main(void) {
    double temp;
    char unit;
    printf("Enter temperature and unit (C/F): ");
    if (scanf("%lf %c", &temp, &unit) != 2) { fprintf(stderr, "Invalid.\n"); return 1; }

    if (unit == 'C' || unit == 'c') {
        printf("%.2f C = %.2f F\n", temp, celsiusToFahrenheit(temp));
    } else {
        printf("%.2f F = %.2f C\n", temp, fahrenheitToCelsius(temp));
    }
    return 0;
}