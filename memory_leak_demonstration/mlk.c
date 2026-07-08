#include <stdio.h>
#include <stdlib.h>

// Function Declaration
void memory_hog(int size);


// MAIN
int main(void) {
    while (1) {
        memory_hog(128000);
    }
    return 0;
}


// Function Definition
void memory_hog(int size) {
    int *a = malloc(size);
}

/*
|***************************|
| Memory Leak Demonstration |
|***************************|

(!) DONT RUN THIS CODE CARELESSLY

    Explanation:
    memory_hog function allocate 128000 bytes/128 kilo bytes to heap
    memory without freeing it, so when function is called inside of
    infinite while loop the allocated heap memory always increases,
    after 1 iteration: 128 KB lost, after 1,000 iterations: ~128 MB
    lost, after 10,000 iterations: ~1.28 GB lost without freeing the
    heap memory, which ultimately causes the program to crash due
    toinsufficient heap memory capacity.
*/