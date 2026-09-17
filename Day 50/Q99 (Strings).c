/*
 * Q99 (Strings)
 *
 * Change the date format from dd/mm/yyyy to dd-Mon-yyyy.
 */

#include <stdio.h>

static const char *monthNames[] = {
    "Jan","Feb","Mar","Apr","May","Jun",
    "Jul","Aug","Sep","Oct","Nov","Dec"
};

int main(void) {
    char dateStr[20];

    printf("Enter date (dd/mm/yyyy): ");
    if (scanf("%19s", dateStr) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    int day, month, year;
    if (sscanf(dateStr, "%d/%d/%d", &day, &month, &year) != 3
        || month < 1 || month > 12 || day < 1 || day > 31) {
        fprintf(stderr, "Invalid date format.\n");
        return 1;
    }

    printf("%02d-%s-%04d\n", day, monthNames[month - 1], year);
    return 0;
}