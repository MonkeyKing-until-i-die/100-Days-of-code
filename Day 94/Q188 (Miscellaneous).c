/*
 * Q188 (Miscellaneous)
 *
 * Write a program to print all Armstrong numbers between 1 and 1000.
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    printf("Armstrong numbers between 1 and 1000:\n");
    for (int n = 1; n <= 1000; n++) {
        int temp = n, digits = 0;
        while (temp) { digits++; temp /= 10; }
        temp = n;
        long long sum = 0;
        while (temp) {
            int d = temp % 10;
            sum += (long long)round(pow(d, digits));
            temp /= 10;
        }
        if (sum == n) printf("%d ", n);
    }
    printf("\n");
    return 0;
}