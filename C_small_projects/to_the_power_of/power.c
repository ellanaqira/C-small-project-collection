#include <stdio.h>

//Function declaration
double powof(double base, double exponent);

int main(void) {
    int result1 = powof(2,3);
    long long result2 = powof(2,32);
    int result3 = powof(2,0);

    printf("2^3  = %d\n", result1);
    printf("2^32 = %lld\n", result2);
    printf("2^0  = %d\n", result3);
    return 0;
}

double powof(double x, double y) {
    const double base = x;

    if (y == 0) {
        return 1;
    }
    if (y >= 1) {
        int i;
        for (i=1; i<y; ++i) {
            x = x * base;
        }
    }
    return x;
}