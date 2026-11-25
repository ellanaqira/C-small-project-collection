#include <stdio.h>

// Constant
#define LENGTH 9
// External Variable
int number[LENGTH] = {2, 6, 10, 3, 7, 9, 5, 13, 3};


// Function declaration
void make_histogram();

int main() {
    extern int number[LENGTH];
    printf(" ______________________\n");
    printf("|_Sales_Histogram_Data_|\n");
    printf(" \\____From_1-9_May____/\n\n");

    make_histogram();
    return 0;
}

void make_histogram(void) {
    int i = 0;
    int n = 0;
    
    extern int number[LENGTH];

    while(i<=(LENGTH-1) && n <= number[i]) {
        if(n == number[i]) {
            printf("\n");
            ++i;
            n=0;
        }
        if(n == 0) {
            printf("%d-|", i+1);
        }
        if(i == (LENGTH-1)) {
            int x;
            for(x=0; x <= number[i]; ++x) {
                printf("=");
            }
            printf("\n");
            break;
        }
        ++n;
        printf("=");
    }
}