/*
 * Q64 (Arrays (1D))
 *
 * Find the digit that occurs the most times in an integer number.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    long long n;

    printf("Enter a positive integer: ");
    if (scanf("%lld", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid input. n must be positive.\n");
        return 1;
    }

    int freq[10];
    memset(freq, 0, sizeof(freq));

    long long temp = n;
    while (temp != 0) {
        freq[temp % 10]++;
        temp /= 10;
    }

    int maxFreq = 0;
    int maxDigit = 0;
    for (int i = 0; i <= 9; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);
    return 0;
}