#include <stdio.h>

// Function Declaration
int mystrlen(const char *str);
void mystrcpy(char *dest, const char *source);
void mystrrev(char *dest, const char *source);


// MAIN
int main(int argc, char *argv) {
    char name[6] = "Ellan";
    int num = mystrlen(name);
    printf("%d\n", num);

    char str[6];
    mystrcpy(str, name);
    printf("%s\n", str);

    char revstr[6];
    mystrrev(revstr, str);
    printf("%s\n", revstr);

    return 0;
}


// Function Definition
int mystrlen(const char *str) {
    // return the length of a string
    int i=0;
    for(i=0; str[i] != '\0'; i+=1) {
        ;
    }
    return i;
}

void mystrcpy(char *dest, const char *source) {
    // copy string to destination
    int i=0;
    for(i=0; source[i] != '\0'; i+=1) {
        dest[i] = source[i];
    }
    dest[i] = '\0';
}

void mystrrev(char *dest, const char *source) {
    // reverse string and store it on destination
    int str_len=0;
    for(str_len=0; source[str_len] != '\0'; str_len+=1) {
        ;
    }

    int i=0;

    for(i=0; str_len != 0; i+=1) {
        dest[i] = source[str_len-1];
        str_len = str_len-1;
    }
    dest[i++] = '\0';
}
