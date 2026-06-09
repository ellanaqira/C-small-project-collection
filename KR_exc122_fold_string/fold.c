#include <stdio.h>

void fold (char raw_string[]);

int main(void) {
    char s[1000];

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