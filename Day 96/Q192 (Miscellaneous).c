/*
 * Q192 (Miscellaneous)
 *
 * Write a program to simulate a simple bank account with deposit, withdraw, and balance check operations.
 */

#include <stdio.h>

int main(void) {
    double balance = 0.0;
    int choice;

    printf("Simple Bank Account Simulator\n");
    do {
        printf("\n1. Deposit\n2. Withdraw\n3. Balance\n4. Exit\nChoice: ");
        if (scanf("%d", &choice) != 1) break;

        if (choice == 1) {
            double amt;
            printf("Amount to deposit: ");
            if (scanf("%lf", &amt) == 1 && amt > 0) {
                balance += amt;
                printf("Deposited %.2f. Balance: %.2f\n", amt, balance);
            } else printf("Invalid amount.\n");
        } else if (choice == 2) {
            double amt;
            printf("Amount to withdraw: ");
            if (scanf("%lf", &amt) == 1 && amt > 0 && amt <= balance) {
                balance -= amt;
                printf("Withdrawn %.2f. Balance: %.2f\n", amt, balance);
            } else printf("Insufficient balance or invalid amount.\n");
        } else if (choice == 3) {
            printf("Current Balance: %.2f\n", balance);
        }
    } while (choice != 4);

    return 0;
}