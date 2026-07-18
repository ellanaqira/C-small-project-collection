#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// Struct
typedef struct {
    char name[50];
    char age[10];
    char height[10];
} People;



// Function Declaration
int write_data(People data);
int str_compare(char str1[], char str2[]);


// MAIN
int main(int argc, char *argv[]) {
    
    // Data
    People person;

    strcpy(person.name, argv[2]);
    strcpy(person.age, argv[3]);
    strcpy(person.height, argv[4]);


    if (str_compare(argv[1], "write") == 1) {
        write_data(person);
        printf("argc = %d\n", argc);
    }


    else {
        printf("'%s' is not a valid command\n", argv[1]);
        return 1;
    }
    return 0;
}


// Function Definition
int write_data(People data) {
    FILE *file = fopen("test.bin", "wb");
    if (file == NULL) {
        printf("Failed to open file\n");
        return 1;
    }

    // Write data to binary file
    size_t num_written;
    num_written = fwrite(&data, sizeof(People), 1, file);

    if (num_written != 1) {
        printf("Failed writing data to file\n");
        return 1;
    }

    fclose(file);

    printf("Successfully write data to file\n");

    return 0;
}


int str_compare(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] == str2[i]) {
        if (str1[i] == '\0' && str2[i] == '\0') {
            return 1;
        }
        ++i;
    }
    return 0;
}