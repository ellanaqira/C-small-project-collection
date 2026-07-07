#include <stdio.h>
#include <stdlib.h>

// Function Declarations
int num_input(void);
void fill(int *length, int *a);


// MAIN
int main(void) {
    int length = 0;
    int *number;       // length is set when the code is running
    length = num_input();
    
    fill(&length, number);
    return 0;
}


// Function Definition
int num_input(void) {
    int num = 0;
    printf("> ");
    scanf("%d", &num);
    return num;
}

void fill(int *length, int *a) {
    a = malloc(*length * sizeof(int));

    printf("address of number = %p\n", a);
    for(int i = 0; i < *length; i+=1) {
        a[i] = 100 - i;
    } 

    for(int i = 0; i < *length; i+=1) {
        printf("a[%d] = %d\n", i, a[i]);  
    }
    printf("address of number = %p\n", a);
}
