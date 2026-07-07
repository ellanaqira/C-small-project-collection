#include <stdio.h>

// function declarartion
int mod(int *num1, int *num2);
void input_mod();

int main(void) {
    input_mod();
    return 0;
}

void input_mod(void) {
    int num1 = 0;
    int num2 = 0;

    printf("num1 > ");
    scanf("%d", &num1);

    printf("num2 > ");
    scanf("%d", &num2);
    
    int result = mod(&num1, &num2);
    printf("%d mod %d = %d\n", num1, num2, result);

}

int mod(int *num1, int *num2) {
    if (*num1 < *num2) {
        printf("num1 must be larger/equals than num2\n");
    }

    int i = 1;
    int res = 0;
    int temp = 0;

    while (1) {
        temp = *num2 * i;
        if (temp <= *num1) {
            res = temp;
            i+=1;
        }
        else if (temp > *num1 || temp == *num1) {
            break;
        }
    }
    return (*num1-res);
}
