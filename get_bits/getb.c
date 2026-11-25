#include <stdio.h>

// function declarartion
unsigned getbits(unsigned x, int p, int n);


// MAIN
int main(void) {
	unsigned x;

	int num = getbits(29,4,3);
	printf("%d\n", num);
	return 0;
}


// Function Definition
unsigned getbits(unsigned x, int p, int n) {
	return (x >> (p+1-n)) & ~(~0 << n);
}

/*
This is a code snippet from The C Programming Book
by K&R page 49. To understand how this code work,
check my project at bitwise_operators/bitw.c, run
bitw.c and the it will print out the explanation for
Bitwise Operator included with visual expalanation
using ASCII Art.
*/
