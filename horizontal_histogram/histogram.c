#include <stdio.h>

void horhstgrm(int *data, int datalen, int y_jump, char *bar);

int main() {
	int data[] = {2, 6, 20, 10, 3, 7, 12, 5, 13, 3, 10, 9};
	int datalen = (int)(sizeof(data) / sizeof(int));
	horhstgrm(data, datalen, 3, "🮅");
}

void horhstgrm(int *data, int datalen, int y_jump, char *bar) {
    int i, j;

    for (i=datalen; 0 < i; i--) {
    	if (i%y_jump == 0) printf(" %d┤%3d|", y_jump, data[datalen-i]);
    	else printf("  |%3d|", data[datalen-i]);
        for (j=0; j<data[datalen-i]; j++) {
        	printf("%s", bar);
        }
        printf("\n");
    }
    printf("\n total: %d\n", datalen);
}
