#include <stdio.h>

#define LIMIT 1000

// Function declaration
void fold (char raw_string[]);

int main(void) {
    char s[LIMIT];

    printf("\nType something without a newline\nand press ctrl+d (EOF) to finish\n");
    printf("\n_.-<[-Raw Text-]>-._\n");
    printf("|   |          |   |\n");
    fold(s);

    printf("\n\n_.-<[-Folded Text-]>-._\n");
    printf("|   |             |   |\n");
    printf("%s\n", s);
    return 0;
}


void fold (char raw_s[]) {
    int i = 0;
    int limit = 51;
    int s;
    
    while ((s = getchar()) != EOF) {
        raw_s[i] = s;
        if (i == limit) {
            if (s == ' ') {
                raw_s[i] = '\n';
                limit = limit + 52;
            }
            else {
                while ((s = getchar()) != EOF && s != ' ') {
                    ++i;
                    raw_s[i] = s;
                }
                ++i;
                raw_s[i] = '\n';
                limit = limit + 52;
            }
        }
        ++i;
    }
    raw_s[i] = '\0';
}


// you can run it by execute this command: ./fold
// you can type whatever you want, or just copy paste text below
// Lorem ipsum dolor sit amet consectetur adipiscing elit. Quisque faucibus ex sapien vitae pellentesque sem placerat. In id cursus mi pretium tellus duis convallis. Tempus leo eu aenean sed diam urna tempor. Pulvinar vivamus fringilla lacus nec metus bibendum egestas. Iaculis massa nisl malesuada lacinia integer nunc posuere. Ut hendrerit semper vel class aptent taciti sociosqu. Ad litora torquent per conubia nostra inceptos himenaeos. Lorem ipsum dolor sit amet consectetur adipiscing elit. Quisque faucibus ex sapien vitae pellentesque sem placerat. In id cursus mi pretium tellus duis convallis. Tempus leo eu aenean sed diam urna tempor. Pulvinar vivamus fringilla lacus nec metus bibendum egestas. Iaculis massa nisl malesuada lacinia integer nunc posuere. Ut hendrerit semper vel class aptent taciti sociosqu. Ad litora torquent per conubia nostra inceptos himenaeos.

// This verry simple project is based from Excercise 1-22 from C Programming
// Language Second Edition by Brian W.Kernighan & Dennis M.Ritchie. I add some
// little decorations like quick instruction and title for raw and folded text.