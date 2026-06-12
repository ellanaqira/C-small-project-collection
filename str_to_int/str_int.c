#include <stdio.h>

// function declaration
int strint (char str_num[]);

int main (void) {
    char num[9] = "72";
    printf("%d\n", strint(num));
    return 0;
}

int strint (char str_num[]) {
    int i;
    int n = 0;

    for (i=0; str_num[i] >= '0' && str_num[i] <= '9'; ++i) {
        n = 10 * n + (str_num[i] - '0');
    }
    return n;
}
