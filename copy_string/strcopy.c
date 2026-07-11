#include <stdio.h>

// function declarartion
void strcopy(char from[], char to[]);

int main(void) {
    char str1[6] = "Ellan";
    char str2[6];

    printf("Before\n");
    printf("str1 : %s\n", str1);
    printf("str2 : %s\n\n", str2);

    strcopy(str1, str2);
    printf("After\n");
    printf("str1 : %s\n", str1);
    printf("str2 : %s\n", str2);
    
    return 0;
}

void strcopy(char from[], char to[]) {
    int i = 0;
    for (i=0; from[i] != '\0'; i+=1) {
        to[i] = from[i];
    }
    to[i] = '\0';
}