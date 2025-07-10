// Write a program that calculates the remaining balance on a loan after the
// first, second, and third monthly payments: e.g.
//      Enter amount of loan: 20000.00
//      Enter interest rate: 6.0
//      Enter monthly payment: 386.66
//
//      Balance remaining after first payment: $19713.34
//      Balance remaining after second payment: $19425.25
//      Balance remaining after third payment: $19135.71
//      Display each balance with two digits after the decimal point.
// Hint: Each month the balance is decreased by the amount of the payment,
// but increased by the balance times the monthly interest rate. To find
// the monthly interest rate, convert the interest rate entered by the user
// to a percentage and divide it by 12.
#include <stdio.h>

int main(void) {
    // declare variables
    float balance, interest, payment, balanceOneMonth, balanceTwoMonth,
        balanceThreeMonth;

    // get user input
    printf("\nEnter amount of loan: $");
    scanf("%f", &balance);

    printf("\nEnter interest rate (e.g. 5.0, 6.5): ");
    scanf("%f", &interest);

    printf("\nEnter monthly payment: $");
    scanf("%f", &payment);

    // calculate balances
    balanceOneMonth = balance - payment + (balance * (interest / 100) / 12);

    balanceTwoMonth =
        balanceOneMonth - payment + (balanceOneMonth * (interest / 100) / 12);

    balanceThreeMonth =
        balanceTwoMonth - payment + (balanceTwoMonth * (interest / 100) / 12);

    // display balances
    printf("\nOriginal balance: $%.2f", balance);
    printf("\nBalance after one month: $%.2f", balanceOneMonth);
    printf("\nBalance after two months: $%.2f", balanceTwoMonth);
    printf("\nBalance after three months: $%.2f\n\n", balanceThreeMonth);

    return 0;
}
