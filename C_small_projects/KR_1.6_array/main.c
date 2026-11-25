/*

This program is a modification of an example program
from the book "The C Programming Language 2nd Edition"
by Brian W. Kernighan & Dennis M. Ritchie from the
Section 1.6 Array in Chapter 1.

-> How to run the code:
	gcc main.c -o main.out
	./main.out

-> Example of usage:
	-> Input:

Hello World! 11455003
A	B	C	s s s	#

	-> Output:

digits :
|'0'= 2||'1'= 2|
|'2'= 0||'3'= 1|
|'4'= 1||'5'= 2|
|'6'= 0||'7'= 0|
|'8'= 0||'9'= 0|

white space = 9
other       = 18

*/

#include <stdio.h>

int main(void) {
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	for (i=0; i<10; i++) {
		ndigit[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9') {
			++ndigit[c-'0'];
		} else if (c == ' ' || c == '\n' || c == '\t') {
			++nwhite;
		} else {
			++nother;
		}
	}

	printf("\n\ndigits :");
	int line_max = 2;
	for (i=0; i<10; i++) {
		if (i%line_max == 0) printf("\n");
		printf("|'%d'= %d|", i, ndigit[i]);
	}
	printf("\n\n");
	printf("white space = %d\n", nwhite);
	printf("other       = %d\n", nother);

	return 0;
}
