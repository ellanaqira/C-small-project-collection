#include <stdio.h>

// function declaration
void mulchar(char c, int num);
void mulstr(char s[], int num);

int main(void) {
    mulchar('#', 10);
    return 0;
}

void mulchar(char c, int num) {
    /*print the same character multyple time*/
    for(int i = 0; i < num; i+=1) {
        putchar(c);
    }
    putchar('\n');
}
