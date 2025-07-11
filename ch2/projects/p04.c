// Write a program that asks the user to enter a dollars-and-cents amount, then
// displays the amount with 5% tax added. e.g.
//      Enter an amount: 100.00
//      With tax added: $105.00
#include <stdio.h>

int main(void) {
	// declare variables
	float amtBeforeTax, amtAfterTax;

	// get user input
	printf(
		"\nEnter a dollar-and-cents amount (e.g. $150.54, $3326.87, $5.09): $");
	scanf("%f", &amtBeforeTax);

	// calculate amount after 5% tax
	amtAfterTax = amtBeforeTax + (amtBeforeTax * 0.05);

	// display amount before and after tax
	printf("\nAmount Before Tax: $%.2f\n", amtBeforeTax);
	printf("Amount After Tax: $%.2f\n\n", amtAfterTax);

	return 0;
}
