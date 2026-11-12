/*
 * Q189 (Miscellaneous)
 *
 * Write a program to print all perfect numbers between 1 and 1000.
 */

#include <stdio.h>

int main(void) {
    printf("Perfect numbers between 1 and 1000:\n");
    for (int n = 2; n <= 1000; n++) {
        int sum = 1;
        for (int i = 2; (long long)i*i <= n; i++) {
            if (n % i == 0) {
                sum += i;
                if (i != n/i) sum += n/i;
            }
        }
        if (sum == n) printf("%d ", n);
    }
    printf("\n");
    return 0;
}