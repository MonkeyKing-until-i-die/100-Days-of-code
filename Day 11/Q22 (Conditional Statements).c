/*
 * Q22 (Conditional Statements)
 *
 * Write a program to find profit or loss percentage given cost price and selling price.
 */
#include <stdio.h>

int main(void) {
    double costPrice, sellingPrice;

    printf("Enter cost price and selling price: ");
    if (scanf("%lf %lf", &costPrice, &sellingPrice) != 2 || costPrice <= 0 || sellingPrice < 0) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    if (sellingPrice > costPrice) {
        double profit = ((sellingPrice - costPrice) / costPrice) * 100.0;
        printf("Profit %.0f%%\n", profit);
    } else if (sellingPrice < costPrice) {
        double loss = ((costPrice - sellingPrice) / costPrice) * 100.0;
        printf("Loss %.0f%%\n", loss);
    } else {
        printf("No Profit No Loss\n");
    }
    return 0;
}