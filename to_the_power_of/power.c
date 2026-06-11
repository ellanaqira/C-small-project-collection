#include <stdio.h>

//Function declaration
double powof(double base, double exponent);

int main(void) {
    int result1 = powof(2,0);
    int result2 = powof(2,5);

    printf("2^0 = %d\n", result1);
    printf("2^5 = %d\n", result2);
    return 0;
}

double powof(double x, double y) {
    double result;
    
    if (y == 0) {
        return 1;
    }
    if (y >= 1) {
        double base = x;
        while (y > 1) {
            --y;
            x = x * base;
        }
        result = x;
    }
    return result;
}