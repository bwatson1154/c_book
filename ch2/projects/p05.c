// Write a program that asks the user to enter a value for x and then displays the value of the given polynomial
#include <stdio.h>

int main(void) {
    // declare variables
    float x, value;

    // get user input
    printf("\nEnter a value for x: ");
    scanf("%f", &x);

    // calculate value of polynomial
    value = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;

    // display the x value and polynomial value
    printf("\nx value: %.2f\npolynomial value: %.2f\n\n", x, value);

    return 0;
}
