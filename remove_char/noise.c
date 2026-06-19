#include <stdio.h>

// constant
#define CHARMAX 1000

// function declaration
void rmchar(char input[], char stain);

int main(void){
    char input[CHARMAX] = "AaaaAAaaAaaaaA";
    char stain = 'A';

    printf("before: %s\n", input);
    rmchar(input, stain);
    printf("after : %s\n", input);
    return 0;
}

void rmchar(char input[], char stain) {
    int i;
    int j = 0;
    for (i=0; input[i] != '\0'; i++) {
        if (input[i] != stain) {
            input[j] = input[i];
            j++;
        }
    }
    input[j] = '\0';
}
