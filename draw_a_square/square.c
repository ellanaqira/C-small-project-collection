#include <stdio.h>

// function declaration
void draw_square(int length, int wide);

int main(void) {
	printf(" ___________________\n");
	printf("| Draw A Square     |\n");
	printf("|-------------------|\n");
	printf("| Information:      | \n");
	printf("| * 1 length = '|'  | \n");
	printf("| * 1 wide   = '__' |\n");
	printf("|___________________|\n\n");

	int l = 5;
	int w = 5;
	printf("\n# Draw a square (length = %d, wide = %d)\n", l, w);
	draw_square(l,w);
	return 0;
}

void draw_square(int l, int w) {
	// draw the top side
	printf(" ");
	for (int i=0; i<w; i++) {
		printf("__");
	}
	printf("\n");


	// draw the left and the right side
	for (int i=0; i<(l-1); i++) {
		printf("|");
		for (int j=0; j<w; j++) {
			printf("  ");
		}
		printf("|\n");
	}


	// draw the bottom side
	printf("|");
	for (int i=0; i<w; i++) {
		printf("__");
	}
	printf("|\n\n");
}
