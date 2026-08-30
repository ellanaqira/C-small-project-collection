#include <stdio.h>

// MAIN
int main(int argc, char *argv) {
    int num = 49;
    int *ptr;
    ptr = &num;

    printf("value of 'num' = %d\n", num);
    printf("memory address of 'num' = %p\n\n", &num);

    printf("value of 'ptr' = %d\n", *ptr);
    printf("address stored in 'ptr' = %p\n", ptr);
    printf("address of 'ptr' itself = %p\n", &ptr);
    
    return 0;
}