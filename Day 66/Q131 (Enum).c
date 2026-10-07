/*
 * Q131 (Enum)
 *
 * Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
 */

#include <stdio.h>

typedef enum { SUNDAY=0, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY } Day;

int main(void) {
    const char *names[] = {"SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY"};
    for (int d = SUNDAY; d <= SATURDAY; d++) {
        printf("%s = %d\n", names[d], d);
    }
    return 0;
}