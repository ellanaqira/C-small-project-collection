#include <stdio.h>

void fold (char raw_string[]);

int main(void) {
    char s[1000];

    fold(s);
    printf("\n\n%s\n", s);
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
            // else {
            //     while (s != ' ') {
            //         ++i;
            //         raw_s[i] = s;
            //     }
            //     raw_s[i] = '\n';
            //     limit = limit + 10;
            // }
        }
        ++i;
    }
    raw_s[i] = '\0';
}