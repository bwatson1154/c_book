/*
Create and run Kernighan and Ritchie's famous "hello, world" program:

#include <stdio.h>

int main(void) {
		printf("hello, world\n");
}

Do you get a warning message from the compiler? If so, what's needed to make it
go away?
*/
#include <stdio.h>

int main(void) {
	printf("hello, world\n");
	return 0;
}

// the program needed a return statement
