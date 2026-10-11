/*
 * Q138 (Enum)
 *
 * Print all enum names and integer values using a loop.
 */

#include <stdio.h>

typedef enum { RED=0, YELLOW, GREEN } Color;

int main(void) {
    const char *names[] = {"RED", "YELLOW", "GREEN"};
    for (int i = RED; i <= GREEN; i++) {
        printf("%s=%d\n", names[i], i);
    }
    return 0;
}