#include <stdio.h>

// Function Declaration
int writebinf(char filename[]);

// MAIN
int main(void) {
	int num[] = {1000000000,
		1000000001,
		1000000002,
		1000000003,
		1000000004,
		1000000005,
		1000000006,
		1000000007,
		1000000008,
		1000000009};

	writebinf("file.bin");

	return 0;
}


// Function Definition
int writebinf(char filename[]) {
	FILE *file;
	file = fopen(filename, "wb");

	if (file == NULL) {
		printf("Failed to open binary file\n");
		return 1;
	}
}