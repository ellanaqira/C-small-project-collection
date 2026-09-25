
/* 3x3 Matrix implementation in C */


#include <stdio.h>

// Function Declarartion
void print_matrix_3x3(int (*matrix)[3]);
void add_matrix_3x3(int (*matrix_a)[3], int (*matrix_b)[3], int (*result)[3]);

// MAIN
int main(int argc, char *argv) {
    // Declare and initialize a 3x3 integer matrix
    int matrix_A [3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrix_B [3][3] = {
        {4, 3, 2},
        {7, 2, 0},
        {2, 9, 1}
    };

    printf("\nMatrix A :\n");
    print_matrix_3x3(matrix_A);

    printf("\nMatrix B :\n");
    print_matrix_3x3(matrix_B);

    printf("\nA+B :\n");
    int result[3][3];
    add_matrix_3x3(matrix_A, matrix_B, result);
    print_matrix_3x3(result);

    return 0;
}

// Function Definition
void print_matrix_3x3(int (*matrix)[3]) {
    for(int rows=0; rows<=3-1; rows +=1) {
        printf("|");
        for (int cols=0; cols<=3-1; cols +=1) {
            printf("%2d ", matrix[rows][cols]);
        }
        printf("|");
        putchar('\n');
    }
}

void add_matrix_3x3(int (*matrix_a)[3], int (*matrix_b)[3], int (*result)[3]) {
    for(int rows=0; rows<=3-1; rows +=1) {
        for (int cols=0; cols<=3-1; cols +=1) {
            // temporary strore matrix a  
            int temp_mtrx_a = matrix_a[rows][cols];

            // temporary strore matrix b
            int temp_mtrx_b = matrix_b[rows][cols];

            // temporary store the result
            int temp_result = temp_mtrx_a + temp_mtrx_b;
                    
            // store the result
            result[rows][cols] = temp_result;    
        }
    }

}
            