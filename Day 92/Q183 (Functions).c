/*
 * Q183 (Functions)
 *
 * Write a program with a recursive function to solve the Tower of Hanoi problem for n disks.
 */

#include <stdio.h>

static void hanoi(int n, char from, char to, char via) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }
    hanoi(n - 1, from, via, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    hanoi(n - 1, via, to, from);
}

int main(void) {
    int n;
    printf("Enter number of disks: ");
    if (scanf("%d", &n) != 1 || n < 1) { fprintf(stderr, "Invalid.\n"); return 1; }
    hanoi(n, 'A', 'C', 'B');
    return 0;
}