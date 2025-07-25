/* Modify the addfrac.c program of Section 3.2 so that the user enters both fractions at the same time, separated by a plus sign:
 *
 * Enter two fractions separated by a plus sign: 5/6+3/4
 * The sum is 38/24
 *
 * addfrac.c:
 *  #include<stdio.h>
 *
 *  int main(void) {
 *      int num1, denom1, num2, denom2, result_num, result_denom;
 *
 *      printf("Enter first fraction: ");
 *      scanf("%d / %d", &num1, &denom1);
 *
 *      printf("Enter second fraction: ");
 *      scanf("%d / %d", &num2, &denom2);
 *
 *      result_num = num1 * denom2 + num2 * denom1;
 *      result_denom = denom1 * denom2;
 *      printf("The sum is %d/%d\n", result_num, result_denom);
 *
 *      return 0;
 *  }
 */
#include <stdio.h>

int main(void) {
    // Declare fraction variables
    int num1, denom1, num2, denom2, result_num, result_denom;

    // Get user input for fractions
    printf("\nEnter fractions (1/2+3/4): ");
    scanf("%d / %d + %d / %d", &num1, &denom1, &num2, &denom2);

    // Calculate sum
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    // Print sum
    printf("The sum is %d/%d\n\n", result_num, result_denom);

    return 0;
}
