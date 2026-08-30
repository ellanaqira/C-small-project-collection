#include <stdio.h>

// Function Declaration
void mulchar(char c, int num);
void mulstr(char s[], int num);


// MAIN
int main(void) {
    mulchar('#', 10);
    mulstr("Ellan", 6);
    return 0;
}


// Function Definition
void mulchar(char c, int num) {
    /*print the same character multyple time*/
    for(int i = 0; i < num; i+=1) {
        putchar(c);
    }
    putchar('\n');
}

void mulstr(char s[], int num) {
    /*print the same string multyple time*/
    for(int i = 0; i<num; i+=1) {
        for(int j = 0; s[j]!='\0'; j+=1) {
            putchar(s[j]);
        }
    }
    putchar('\n');
}