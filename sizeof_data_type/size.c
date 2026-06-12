#include <stdio.h> 
#include <limits.h>


int main(void) {
    printf("\n");
    printf(" _,..--- See The Size Of ---..,_\n");
    printf("(    char, short, int, long     )\n");
    printf(" ''--..__On Your Machine__..--''\n");
    printf("\n");

// char
    int char_size_byte = sizeof(char);
    int char_size_bit = 8 * char_size_byte;
    
    printf("* char : %d bytes (%d bits)\n", char_size_byte, char_size_bit);
    printf("  range:\n");
    printf("  |--unsigned : 0 -> %d\n", UCHAR_MAX);
    printf("  '--signed   : %d -> %d\n\n", CHAR_MIN, CHAR_MAX);


// short
    int short_size_byte = sizeof(short);
    int short_size_bit = 8 * short_size_byte;
    
    printf("* short : %d bytes (%d bits)\n", short_size_byte, short_size_bit);
    printf("  range:\n");
    printf("  |--unsigned : 0 -> %d\n", USHRT_MAX);
    printf("  '--signed   : %d -> %d\n\n", SHRT_MIN, SHRT_MAX);


// int
    int int_size_byte = sizeof(int);
    int int_size_bit = 8 * int_size_byte;
    // unsigned
    long uint_max = UINT_MAX;
    // signed
    long int_range_from = INT_MIN;
    long int_range_to = INT_MAX;

    printf("* int : %d bytes (%d bits)\n", int_size_byte, int_size_bit);
    printf("  range:\n");
    printf("  |--unsigned : 0 -> %ld\n", uint_max);
    printf("  '--signed   : %ld -> %ld\n\n", int_range_from, int_range_to);


// long
    int long_size_byte = sizeof(long);
    int long_size_bit = 8 * long_size_byte;
    // unsigned
    long double uns_long_range = ULONG_MAX;
    // signed
    long long long_range_from = LONG_MIN;
    long long long_range_to = LONG_MAX;

    printf("* long : %d bytes (%d bits)\n", long_size_byte, long_size_bit);
    printf("  range:\n");
    printf("  |--unsigned : 0 -> %Lf\n", uns_long_range);
    printf("  '--signed   : %lld -> %lld\n\n", long_range_from, long_range_to);

    return 0;
}


// This verry simple project is based from Excercise 2-1 from C Programming
// Language Second Edition by Brian W.Kernighan & Dennis M.Ritchie. I also
// add information about the range of unsigned and signed of data type. I
// add some decoration too like the title, newline, and information section
// to make it looks neater and not boring.