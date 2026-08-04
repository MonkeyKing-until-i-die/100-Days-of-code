/*
 * Q27 (Loops without Arrays/Strings)
 *
 * Write a program to print the sum of the first n odd numbers.
 */
#include <stdio.h>

int main(void) {
    int n;

    printf("Enter n (number of odd numbers): ");
    if (scanf("%d", &n) != 1 || n < 1) {
        fprintf(stderr, "Invalid input. n must be at least 1.\n");
        return 1;
    }

    long long sum = 0;
    int count = 0;
    int num = 1;

    while (count < n) {
        sum += num;
        num += 2;
        count++;
    }

    printf("%lld\n", sum);
    return 0;
}