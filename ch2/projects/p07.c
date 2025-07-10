// Write a program that asks the user to enter a U.S. dollar amount and then
// shows how to pay that amount using the smallest number of $20, $10, $5, and
// $1 bills: e.g.
//      Enter a dollar amount: 93
//
//      $20 bills: 4
//      $10 bills: 1
//       $5 bills: 0
//       $1 bills: 3
#include <stdio.h>

int main(void) {
    // declare variables
    int amount, twenties, tens, fives, ones;

    // get user input
    printf("\nEnter dollar amount (enter integer values only): $");
    scanf("%d", &amount);

    // calculate bill amounts
    twenties = amount / 20;
    amount -= twenties * 20;

    tens = amount / 10;
    amount -= tens * 10;

    fives = amount / 5;
    amount -= fives * 5;

    ones = amount / 1;
    amount -= ones * 1;

    // display the results
    printf(
        "\nDollar amount: %d\n\nSmallest number of bills:\n$20 bills: %d\n$10 "
        "bills: %d\n$5 bills: %d\n$1 bills: %d\n\n",
        amount, twenties, tens, fives, ones);

    return 0;
}
