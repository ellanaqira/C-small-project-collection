#include <stdio.h>

// Function Declaration
void titled(char *s);
void upper(char *s);
void lower(char *s);


// MAIN
int main(void) {
    int num = 0;
    char s1[] = "ellan";
    char s2[] = "eLlaN";
    char s3[] = "ELLAN";

    titled(s1);
    upper(s2);
    lower(s3);

    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("%s\n", s3);

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


void upper(char *s) {
    int i = 0;
    for (i=0; s[i] != '\0'; i+=1) {
        if (s[i] >= 97 && s[i] <= 122) {
            s[i] = s[i] - 32;
        }
        else {
            s[i] = s[i];
        }
    }
    s[i] = '\0';
}


void lower(char *s) {
    int i = 0;
    for (i=0; s[i] != '\0'; i+=1) {
        if (s[i] >= 65 && s[i] <= 90) {
            s[i] = s[i] + 32;
        }
        else {
            s[i] = s[i];
        }
    }
    s[i] = '\0';
}