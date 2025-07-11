// Modify the program of Programming Project 5 so that the polynomial is
// evaluated using the following formula:
// ((((3x+2)x-5)x-1)x+7)x-6
// Note that the modified program requires fewer multiplications. This technique
// for evaluating polynomials is known as Horner's Rule.
#include <stdio.h>

int main(void) {
	// declare variables
	float x, value;

	// get user input
	printf("\nEnter a value for x: ");
	scanf("%f", &x);

	// calculate value of polynomial
	value = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

	// display x value and polynomial value
	printf("\nx value: %.2f\npolynomial value: %.2f\n\n", x, value);

	return 0;
}
