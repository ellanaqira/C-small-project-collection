#include <stdio.h>

// function declarartion
unsigned getbits(unsigned x, int p, int n);

int main(void) {
	unsigned x;
	// 9 = 0000 1001 -> 0010 0100
	// 0 = 0000 0000  ->  1111 1111 -> 0001 1111 -> 1110 0000
	// 0010 0000

	int num = getbits(9,4,3);
	printf("%d\n", num);
	return 0;
}

unsigned getbits(unsigned x, int p, int n) {
	return (x >> (p+1-n)) & ~(~0 << n);
}
