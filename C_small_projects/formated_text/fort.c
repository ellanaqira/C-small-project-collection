#include <stdio.h>

// Function Declaration
void titled(char *s);


// MAIN
int main(void) {
    int num = 0;
    char s1[6] = "ellan";
    char s2[6] = "Aqira";

    titled(s1);
    printf("%s\n", s1);
    printf("%s\n", s2);
    return 0;
}


// Function Definition
void titled(char *s) {
    if (s[0] < 97 || s[0] > 122) {
        int i = 0;
        for (i=0; s[i] != '\0'; i+=1) {
            s[i] = s[i];
        }
        s[i] = '\0';
    }
    
    else {
        s[0] = s[0] - 32;
        int i = 0;
        for (i = 1; s[i] != '\0'; i+=1) {
            s[i] = s[i];
        }
        s[i] = '\0';
    }
}