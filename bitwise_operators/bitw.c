#include <stdio.h>

#define NUM 7

int main(void) {
	// title
	printf("\n ___ _ _          _                       \n");
	printf("| _ |_) |___ __ _(_)___ ___               \n");
	printf("| _ \\ |  _\\ V  V / (_-</ -_)              \n");
	printf("|___/_|\\__|\\_/\\_/|_/__/\\___|  _           \n");
	printf(" / _ \\ _ __  ___ _ _ __ _ _ _| |_ ___ _ _ \n");
	printf("| (_) | '_ \\/ -_) '_/ _` | '_|  _/ _ \\ '_|\n");
	printf(" \\___/| .__/\\___|_| \\__,_|_|  \\__\\___/_|  \n");
	printf("      |_|                                 \n\n\n");


	// bitwise AND
	unsigned int bw_and = NUM & 12;
	printf("# Bitwise AND (&) :\n");
	printf("  %d & 12 = %d\n", NUM, bw_and);
	printf("  '-> Explanation:\n");
	printf("      %d  = 0000 0111\n", NUM);
	printf("      12 = 0000 1100\n");
	printf("                 ~\n");
	printf("               (same)\n");
	printf("       %d = 0000 0100\n\n", bw_and);


	// bitwise inclusive OR
	unsigned int bw_ior = NUM | 12;
	printf("# Bitwise Inclusive OR (|) :\n");
	printf("  %d | 12 = %d\n", NUM, bw_ior);
	printf("  '-> Explanation:\n");
	printf("      %d  = 0000 0111\n", NUM);
	printf("      12 = 0000 1100\n");
	printf("                ~~~~\n");
	printf("            (one appear)\n");
	printf("      %d = 0000 1111\n\n", bw_ior);

	// bitwise exclusive OR
	unsigned int bw_eor = NUM ^ 12;
	printf("# Bitwise Exclusive OR (^) :\n");
	printf("  %d ^ 12 = %d\n", NUM, bw_eor);
	printf("  '-> Explanation:\n");
	printf("      %d  = 0000 0111\n", NUM);
	printf("      12 = 0000 1100\n");
	printf("                ~~~~\n");
	printf("          (one appear once)\n");
	printf("      %d = 0000 1011\n\n", bw_eor);
	
	// left shift
	unsigned int shft_l  = NUM << 2;
	printf("# Left Shift (<<):\n");
	printf("  %d << 2 = %d\n", NUM, shft_l);
	printf("  '-> Explanation:\n");
	printf("      %d = 0000 0111, shift to the left by 2 bit\n", NUM);
	printf("          0000 0111 00   -->  0001 1100 = %d\n", shft_l);
	printf("          ~~        ~~\n");
	printf("         (-)        (+)\n");

	// right shift
	unsigned int shft_r  = NUM >> 2;
	printf("\n# Right Shift (>>):\n");
	printf("  %d >> 2 = %d\n", NUM, shft_r);
	printf("  '-> Explanation:\n");
	printf("      %d = 0000 0111, shift to the right by 2 bit\n", NUM);
	printf("          00 0000 0111   -->  0000 0001 = %d\n", shft_r);
	printf("          ~~        ~~\n");
	printf("         (+)        (-)\n");
	
	// one's complement
	unsigned int onecom = ~NUM;
	printf("\n# Right Shift (~):\n");
	printf("  ~%d = %d\n", NUM, onecom);
	printf("  '-> Explanation:\n");
	printf("      %d = 0000 0111  -->  1111 1000 = %d\n", NUM, onecom);

	printf("\n");
	return 0;
}
