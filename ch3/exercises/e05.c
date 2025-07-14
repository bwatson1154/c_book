/*  Suppose that we call scanf as follows:
 *  scanf("%f%d%f", &x, &i, &y);
 *  If the user enters
 *  12.3 45.6 789
 *  what will be the values of x, i, and y after the call? (Assume that x and y
 *  are float variables and i is an int variable.)
 *  
 *  Expected values:
 *  x=12.3
 *  i=45
 *  y=0.600000
 */
#include <stdio.h>

int main(void) {
    int i;
    float x, y;

    scanf("%f%d%f", &x, &i, &y);
    printf("\n%f\n%d\n%f\n", x, i ,y);

    return 0;
}
