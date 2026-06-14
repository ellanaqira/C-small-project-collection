#include <stdio.h>

// function declaration
int lower(int c);
int upper(int c);


int main(void) {
    printf("%c\n", lower('A'));
    printf("%c\n", upper('b'));
    return 0;
}

int lower(int c) {
    if (c >= 'A' && c <= 'z') {
        return c + ('a'-'A');
    }
    else {
        return c;
    }
}

int upper(int c) {
    if (c >= 'A' && c <= 'z') {
        return c - ('a'-'A');
    }
    else {
        return c;
    }
}