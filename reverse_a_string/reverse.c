#include <stdio.h>

// Function declaration
int lenstr(char string[]); // get the length of a string
void reverse_str(int length, char str[], char rev_str[]); // reverse a string

int main() {
    char s[] = "Hello World!";
    int len_s = lenstr(s);
    char rev_s[len_s + 1];

    reverse_str(len_s, s, rev_s);
    printf("Original : %s\nReverse  : %s\n", s, rev_s);
    return 0;
}


int lenstr(char string[]) {
    int i = 0;

    while (string[i] != '\0') {
        ++i;
    }
    return i;
}


void reverse_str(int length, char str[], char rev_str[]) {
    int i = 0;

    while (length > 0) {
        rev_str[i] = str[length-1];
        --length;
        ++i;
    }
    rev_str[i] = '\0';

}
