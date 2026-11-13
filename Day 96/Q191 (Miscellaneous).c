/*
 * Q191 (Miscellaneous)
 *
 * Write a program to check if two numbers are amicable pairs.
 */

#include <stdio.h>

static int sumOfDivisors(int n) {
    int sum = 1;
    for (int i = 2; (long long)i*i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n/i) sum += n/i;
        }
    }
    return sum;
}

int main(void) {
    int a, b;
    printf("Enter two positive integers: ");
    if (scanf("%d %d", &a, &b) != 2 || a < 1 || b < 1) { fprintf(stderr, "Invalid.\n"); return 1; }

    if (sumOfDivisors(a) == b && sumOfDivisors(b) == a && a != b) {
        printf("%d and %d are amicable pairs.\n", a, b);
    } else {
        printf("%d and %d are NOT amicable pairs.\n", a, b);
    }
    return 0;
}