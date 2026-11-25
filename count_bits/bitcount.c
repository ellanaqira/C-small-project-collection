#include <stdio.h>

// function declaration
int bitcount(unsigned x);

/*
       0000               0000
      / || \             / || \
     / /  \ \           / /  \ \
    /  |  |  \         /  |  |  \
   /  /    \  \       /  /    \  \
 2^7 2^6  2^5 2^4   2^3 2^2  2^1 2^0
 128  64   32  16    8   4    2   1
*/

int main(void) {
    // 27 = 0001 1011
    int num = bitcount(27);
    printf("%d\n", num);
    return 0;
}

int bitcount(unsigned x) {    
    int b;
    for (b=0; x != 0; x >>= 1) {
        if (x & 01) {
            b += 1;
        }
    }
    return b;
}