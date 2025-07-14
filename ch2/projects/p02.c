// Write a program that computes the volume of a sphere with a 10-meter radius,
// using the formula v=4/3pir^3. Write the fraction 4/3 as 4.0f/3.0f. Try
// writing it as 4/3, what happens?

#include <stdio.h>

int main(void) {
    // Declare radius variable, define volume in terms of radius
	double radius = 10;
	double volume = 3.14 * 4.0f / 3.0f * radius * radius * radius;

    // Print calculated volume
	printf("Volume of sphere with radius %.0f meters: %.2f cubic meters\n",
		   radius, volume);

	return 0;
}
// I was not able to discern a difference between using 4/3 and 4.0f/3.0f.
