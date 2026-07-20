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
int write_data(People data, char file_name[]);
int str_compare(char str1[], char str2[]);


// MAIN
int main(int argc, char *argv[]) {

    if (str_compare(argv[1], "add") == 1) {
        if (argc == 5) {
            // Data
            People person;
            // Copy string
            strcpy(person.name, argv[2]);
            strcpy(person.age, argv[3]);
            strcpy(person.height, argv[4]);

            write_data(person, "test.bin");
            printf("argc = %d\n", argc);
        }

        else {
            printf("command must be 'add <name> <age> <height>'\n");
        }
    }

    else {
        printf("'%s' is not a valid command\n", argv[1]);
        return 1;
    }
    return 0;
}


// Function Definition
int write_data(People data, char file_name[]) {
    FILE *file = fopen(file_name, "ab");
    if (file == NULL) {
        printf("Failed to open file\n");
        return 1;
    }

    // Write data to binary file
    size_t num_written;
    num_written = fwrite(&data, sizeof(People), 1, file);

    if (num_written != 1) {
        printf("Failed adding data to file\n");
        return 1;
    }

    fclose(file);

    printf("Successfully add data to file\n");

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