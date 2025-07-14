/* Write a program that accepts a date from the user in the form mm/dd/yyyy and
 * then displays it in the form yyyymmdd:
 *
 * Enter a date (mm/dd/yyyy): 2/17/2011
 * You entered the date 20110217
 */
#include <stdio.h>

int main(void) {
    // Declare date variables
    int month, day, year;

    // Get user input for date
    printf("\nEnter a date (mm/dd/yyyy): ");
    scanf("%d / %d / %d", &month, &day, &year);

    // Print reformatted date
    printf("\nYou entered the date %.2d%.2d%.4d\n", year, month, day);

    return 0;
}
