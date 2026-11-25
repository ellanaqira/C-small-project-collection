#include <stdio.h>

// constant
#define MAXCHAR 1000

// function declarartion
int lctchar(char str1[], char str2[]);
void move_arrow(int num);


int main(void) {
    char str1[MAXCHAR] = "aaaaaxyzaa";
    char str2[MAXCHAR] = "xyz";

    printf("\nFind the first location of '%s'\n", str2);
    printf("%s\n", str1);

    int location = (lctchar(str1, str2));
    move_arrow(location);

    printf("\n'%s' first location at %d\n\n", str2, location+1);

    return 0;
}

int lctchar(char str1[], char str2[]){
    int i;
    int j;
    int first;
    for (i=0; str1[i] != '\0'; i++) {
        for (j=0; str1[i] != '\0'; i++) {
            if (str1[i] == str2[j]) {
                return i;
            }
        }
    }
    return -1;
}

void move_arrow(int num) {
    int i;
    for (i=0; i<num; i++) {
        putchar(' ');
    }
    printf("^");
}


// you can run it by execute this command: ./lct.exe
// This verry simple project is based from Excercise 2-5 from C Programming
// Language Second Edition by Brian W.Kernighan & Dennis M.Ritchie. I add
// little decorations like arrow that poit to the string location.