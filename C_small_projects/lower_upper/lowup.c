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

// you can run it by execute this command: ./lowup.exe
// This verry simple project is based from example function from C Programming
// Language Second Edition by Brian W.Kernighan & Dennis M.Ritchie, Section 2.7,
// page 43. I made upper function too for more practice. 