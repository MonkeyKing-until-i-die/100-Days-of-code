/*
 * Q197 (Miscellaneous)
 *
 * Write a program to check if a given number is a Harshad (Niven) number.
 */

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 1) { fprintf(stderr, "Invalid.\n"); return 1; }

    int sum = 0, temp = n;
    while (temp) { sum += temp % 10; temp /= 10; }

    if (n % sum == 0) printf("%d is a Harshad number.\n", n);
    else              printf("%d is NOT a Harshad number.\n", n);
    return 0;
}