#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>



// Constant
#define MAXCHAR 100


// Struct
typedef struct {
    char name[MAXCHAR];
    int age;
    double score;
} Student;


// Function Declaration
bool write_data(char *filename, Student *data, int total);
Student *read_data(char *filename, int *tostal);
int str_compare(char str1[], char str2[]);


// MAIN
int main(int argc, char *argv[]) {
    Student *school;

    school = malloc(sizeof(Student) * 3);

    strcpy(school[0].name, "Andy");
    school[0].age = 16;
    school[0].score = 89.7;

    strcpy(school[1].name, "Buzz");
    school[1].age = 18;
    school[1].score = 75.4;

    strcpy(school[2].name, "Woody");
    school[2].age = 19;
    school[2].score = 94.8;

    if (str_compare(argv[1], "write") == 1) {
        if (write_data("file.bin", school, 3)) {
            printf("Write data succsess\n");
        }
        else {
            printf("Write data failed\n");
            return 1;
        }
    }

    else {
        printf("'%s' is not a valid command\n", argv[1]);
    }

    free(school);
    
    return 0;
}


// Function Definition
bool write_data(char *filename, Student *data, int total) {
    FILE *file;
    file = fopen(filename, "wb");

    if (file == NULL) {
        return false;
    }

    if (fwrite(&total, sizeof(int), 1, file) != 1) {
        return false;
    }

    if (fwrite(data, sizeof(Student), total, file) != 1) {
        return false;
    }

    if (fclose(file) == EOF) {
        return false;
    }
    return true;
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