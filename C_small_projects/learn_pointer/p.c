#include <stdio.h>

int main(void) {
    int x = 1, y = 2, z[10];
    int *ip;        // ip is a pointer to int*

    printf("int x = 1, y = 2, z[10];\n");
    printf("int *ip;\n\n");

    ip = &x;        // ip now point to x
    printf("ip = &x;        // ip now point to x\n");
    printf("z  -> %d = %p\n", z[0], &z[0]);
    printf("y  -> %d = %p\n", y, &y);
    printf("x  -> %d = %p\n", x, &x);
    printf("ip -> %d = %p\n\n", *ip, ip);

    y = *ip;        // y is now 1
    printf("y = *ip;        // y is now 1\n");
    printf("z  -> %d = %p\n", z[0], &z[0]);
    printf("y  -> %d = %p\n", y, &y);
    printf("x  -> %d = %p\n", x, &x);
    printf("ip -> %d = %p\n\n", *ip, ip);

    *ip = 0;        // y is now 0
    printf("*ip = 0;        // x is now 0\n");
    printf("z  -> %d = %p\n", z[0], &z[0]);
    printf("y  -> %d = %p\n", y, &y);
    printf("x  -> %d = %p\n", x, &x);
    printf("ip -> %d = %p\n\n", *ip, ip);

    ip = &z[0];     // ip now point to z at index 0
    printf("ip = &z[0];     // ip now point to z at index 0\n");
    printf("z  -> %d = %p\n", z[0], &z[0]);
    printf("y  -> %d = %p\n", y, &y);
    printf("x  -> %d = %p\n", x, &x);
    printf("ip -> %d = %p\n\n", *ip, ip);

    // printf("adress x  = %p\n", &x);
    // printf("adress ip = %p\n", ip);

    return 0;
}