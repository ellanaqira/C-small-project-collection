#include <stdio.h> 

// Function Declaration
int lenf(char string[]); // get the length of a string

int main() {
    char s[] = "Hello World!";
    int x = lenf(s);

    printf("String : %s\nLength : %d\n", s, x);
    return 0;
}


int lenf(char string[]) {
    int i = 0;

    while (string[i] != '\0') {
        ++i;
    }
    return i;
}