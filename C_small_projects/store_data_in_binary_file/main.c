#include <stdio.h>


// Function Declaration
int writebinf(char *filename, int (*data)[10]);
int showbinf(char *filename);
int str_compare(char str1[], char str2[]);


// MAIN
int main(int argc, char *argv[]) {
    int num[] = {
    1000000000,
    1000000001,
    1000000002,
    1000000003,
    1000000004,
    1000000005,
    1000000006,
    1000000007,
    1000000008,
    1000000009};

	if (str_compare(argv[1], "write") == 1) {
		writebinf("file.bin", &num);
	}

	else if (str_compare(argv[1], "show") == 1) {
		showbinf("file.bin");
	}

	return 0;
}


// Function Definition
int writebinf(char *filename, int (*data)[10]) {
	/*
	Write data to a binary file
	*/
    int size = sizeof(*data) / sizeof(*data[0]);

	FILE *file;
	file = fopen(filename, "wb");

	if (file == NULL) {
		printf("Failed to open binary file\n");
		return 1;
	}
	// write data to binary file
	fwrite(data, sizeof(int), size, file);
	fclose(file);
	printf("Write data success\n");
	return 0;
}


int showbinf(char *filename) {
	/*
	Read and print out data that stored in a binary file
	*/
	int data[10];

	FILE *file;
	file = fopen(filename, "rb");

	if (file == NULL) {
		printf("Failed to open binary file\n");
		return 1;
	}
	// read data from binary file
	fread(data, sizeof(data), 1, file);
	fclose(file);

	for (int i=0; i<10; i+=1) {
		printf("data[%d] = %d\n", i, data[i]);
	}
	return 0;
}


int str_compare(char str1[], char str2[]) {
	/*
	Compare two string to see if they are the same
	if two string are the same return 1,
	and if not  return 0
	*/
    int i = 0;

    while (str1[i] == str2[i]) {
        if (str1[i] == '\0' && str2[i] == '\0') {
            return 1;
        }
        ++i;
    }
    return 0;
}