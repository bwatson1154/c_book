/* Write a program that formats product information entered by the user. A
 * session with the program should look like this:
 *
 * Enter item number: 583
 * Enter unit price: 13.5
 * Enter purchase date (mm/dd/yyyy): 10/24/2010
 *
 * Item         Unit        Purchase
 *              Price       Date
 * 583          $  13.50    10/24/2010
 *
 * The item number and date should be left justified; the unit price should be
 * right justified. Allow dollar amounts up to $9999.99 Hint: Use tabs to line
 * up the columns.
 */
#include <stdio.h>

int main(void) {
    // Declare item number, price, and purchase date variables
	int item, month, day, year;
	float price;

    // Get user input for variables
	printf("Enter item number: ");
	scanf("%d", &item);
	printf("Enter unit price: ");
	scanf("%f", &price);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d / %d / %d", &month, &day, &year);

    // Print formatted variables
	printf("\nItem\t\tUnit\t\tPurchase\t");
	printf("\n\t\tPrice   \tDate\t\t");
    printf("\n%-12d\t$%7.2f\t%-.2d/%-.2d/%-.4d\t\n", item, price, month, day, year);

	return 0;
}
