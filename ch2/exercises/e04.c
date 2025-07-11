/*
Write a program that declares several int and float variables--without
initializing them--and then prints their values. Is there any pattern to the
values?
 */
#include <stdio.h>

int main(void) {
	int var1, var2, var3;
	float var4, var5, var6;

	printf("\nints: %d, %d, %d\n", var1, var2, var3);
	printf("floats: %f, %f, %f\n\n", var4, var5, var6);
	return 0;
}

/*
In my case, all the integer values were 0, and the float values were 0.000000
 */
