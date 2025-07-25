/*
Write calls of printf that display a float variable x in the following formats.
*/
#include <stdio.h>

int main(void) {
    float x = 12.34567;

    // Exponential notation; left-justified in a field of size 8; one digit after the decimal point.
    printf("\n%-8.1e\n", x);
    // Exponential notation; right-justified in a field of size 10; six digits after the decimal point.
    printf("%10.6e\n", x);
    // Fixed decimal notation; left-justified in a field of size 8; three digits after the decimal point.
    printf("%-8.3f\n", x);
    // Fixed decimal notation; right-justified in a field of size 6; no digits after the decimal point.
    printf("%6.0f\n\n", x);

    return 0;
}
