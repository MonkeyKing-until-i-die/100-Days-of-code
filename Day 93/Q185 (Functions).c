/*
 * Q185 (Functions)
 *
 * Write a program to demonstrate the use of static local variables inside a function.
 */

#include <stdio.h>

static int callCounter(void) {
    static int count = 0;
    count++;
    return count;
}

int main(void) {
    for (int i = 0; i < 5; i++) {
        printf("Call #%d: count = %d\n", i + 1, callCounter());
    }
    return 0;
}