// Modify the program of Programming Project 2 so that it prompts the user to
// enter the radius of the sphere.
#include <stdio.h>

int main(void) {
    // declare variables
    float radius, volume;

    // get user input
    printf("\nEnter sphere radius: ");
    scanf("%f", &radius);

    // calculate volume
    volume = 4.0f / 3.0f * 3.141 * radius * radius * radius;

    // display volume
    printf("\nVolume of sphere with radius %.0f meters: %.2f cubic meters\n\n",
           radius, volume);

    return 0;
}
