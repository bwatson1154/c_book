/* Write a program that prompts the user to enter a telephone number in the form
 * (xxx) xxx-xxxx and then displays the number in the form xxx.xxx.xxxx:
 *
 * Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
 * You entered 404.817.6900
 */
#include <stdio.h>

int main(void) {
    // Declare number variables
    int area, num1, num2;

    // Get user input for phone number
    printf("\nEnter phone number [(xxx) xxx-xxxx]: ");
    scanf("( %d ) %d - %d", &area, &num1, &num2);

    // Print reformatted phone number
    printf("\nYou entered %3d.%3d.%4d\n\n", area, num1, num2);

    return 0;
}
