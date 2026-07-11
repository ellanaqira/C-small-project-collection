#include <stdio.h>

//Function declaration
void etab(int raw_input);


int main (void) {
    int c;
    printf("\nThis program will change\n");
    printf("eight hyphen(-) into one tab\n\n");

    
    etab(c);
    return 0;
}

void etab(int raw_input) {    
    int hyphen_num = 0;

    while ((raw_input = getchar()) != EOF) {
        if (raw_input == '-') {
            ++hyphen_num;
            if (hyphen_num == 8) {
                hyphen_num = 0;
                putchar('\t');
            }
        }
        else {
            hyphen_num = 0;
            putchar(raw_input);
        }
        
    }
}



// Note: you can run it direcly or execute this command:
// ./entab < in.txt > out.txt
// that takes the input from in.txt and after the program
// processed its content puts it to out.txt.

// This verry simple project is based from Excercise 1-21 from C Programming
// Language Second Edition by Brian W.Kernighan & Dennis M.Ritchie. I made a
// slight modification: i replace propper number of hyphen(-) with a tab just
// to make it more visible.