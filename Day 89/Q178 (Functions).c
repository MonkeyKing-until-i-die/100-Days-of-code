/*
 * Q178 (Functions)
 *
 * Write a program with a function to check whether a number is perfect.
 */

#include <stdio.h>

static int isPerfect(int n) {
    if (n < 2) return 0;
    int sum = 1;
    for (int i = 2; (long long)i*i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n/i) sum += n/i;
        }
    }
    return sum == n;
}

int main(void) {
    int n;
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 1) { fprintf(stderr, "Invalid.\n"); return 1; }
    printf("%s\n", isPerfect(n) ? "Perfect number" : "Not perfect number");
    return 0;
}