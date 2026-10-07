/*
 * Q132 (Enum)
 *
 * Define an enum for traffic lights (RED, YELLOW, GREEN) and print Stop, Wait, or Go.
 */

#include <stdio.h>

typedef enum { RED, YELLOW, GREEN } Light;

int main(void) {
    char input[16];
    printf("Enter light (RED/YELLOW/GREEN): ");
    if (scanf("%15s", input) != 1) { fprintf(stderr, "Invalid input.\n"); return 1; }

    Light light;
    if      (input[0]=='R'||input[0]=='r') light = RED;
    else if (input[0]=='Y'||input[0]=='y') light = YELLOW;
    else                                   light = GREEN;

    switch (light) {
        case RED:    printf("Stop\n");  break;
        case YELLOW: printf("Wait\n");  break;
        case GREEN:  printf("Go\n");    break;
    }
    return 0;
}