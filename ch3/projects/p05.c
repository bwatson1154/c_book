/* Write a program that asks the user to enter the numbers from 1 to 16 (in any
 * order) and then displays the numbers in a 4 by 4 arrangement, followed by the
 * sums of rows, columns, and diagonals:
 *
 * Enter the numbers from 1 to 16 in any order:
 * 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
 *
 * 16  3  2 13
 *  5 10 11  8
 *  9  6  7 12
 *  4 15 14  1
 *
 * Row sums: 34 34 34 34
 * Column sums: 34 34 34 34
 * Diagonal sums: 34 34
 *
 * If the row, column, and diagonal sums are all the same, the numbers are said
 * to form a magic square. The magic square shown here appears in a 1514
 * engraving by artist and mathematician Albrecht Durer. (Note that the middle
 * numbers in the last row give the date of the engraving.)
 */
#include <stdio.h>

int main(void) {
	// Declare number variables
	int n11, n12, n13, n14, n21, n22, n23, n24, n31, n32, n33, n34, n41, n42,
		n43, n44, sumRow1, sumRow2, sumRow3, sumRow4, sumCol1, sumCol2, sumCol3,
		sumCol4, sumDiag1, sumDiag2;

	// Get user input for numbers
	printf("Enter the numbers from 1 to 16 in any order:\n");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &n11, &n12, &n13,
		  &n14, &n21, &n22, &n23, &n24, &n31, &n32, &n33, &n34, &n41, &n42,
		  &n43, &n44);

	// Calculate sums
	sumRow1 = n11 + n12 + n13 + n14;
	sumRow2 = n21 + n22 + n23 + n24;
	sumRow3 = n31 + n32 + n33 + n34;
	sumRow4 = n41 + n42 + n43 + n44;
	sumCol1 = n11 + n21 + n31 + n41;
	sumCol2 = n12 + n22 + n32 + n42;
	sumCol3 = n13 + n23 + n33 + n43;
	sumCol4 = n14 + n24 + n34 + n44;
	sumDiag1 = n11 + n22 + n33 + n44;
	sumDiag2 = n14 + n23 + n32 + n41;

	// Print magic square and sums
	printf("\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d "
		   "%2d\n\n",
		   n11, n12, n13, n14, n21, n22, n23, n24, n31, n32, n33, n34, n41, n42,
		   n43, n44);
	printf("Row sums: %d %d %d %d\n", sumRow1, sumRow2, sumRow3, sumRow4);
	printf("Column sums: %d %d %d %d\n", sumCol1, sumCol2, sumCol3, sumCol4);
	printf("Diagonal sums: %d %d\n\n", sumDiag1, sumDiag2);

	return 0;
}
