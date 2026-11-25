#include <stdio.h>

#define Space_Len 8
// Function declaration
void detab (int raw_input);


int main (void) {
    int c;
    printf("\nThis program will change 'tab' into hyphen(-)\n");
    printf("according to the number of spaces on the tab\n\n");
    
    detab(c);
    return 0;
}

// change tab into '-' according to the ammount of blank from tab itself
// to make tab more visible
void detab (int raw_input) {
    int i;


    while((raw_input = getchar()) != EOF) {
        if (raw_input == '\t') {
            for (i=0; i<=Space_Len; ++i) {
                putchar('-');
            }
        }
        else {
            putchar(raw_input);
        }
    }
}

//Note: you can run it direcly or execute this command:
//./detab < in.txt > out.txt
//that takes the input from in.txt and after the program
// processed its content puts it to out.txt.

// This verry simple project is based from Excercise 1-20 from C Programming
// Language Second Edition by Brian W.Kernighan & Dennis M.Ritchie. I made a
// slight modification: instead of replace tap with propper number of blanks,
// i replace it with propper number of hyphen(-) just to make it more visible.