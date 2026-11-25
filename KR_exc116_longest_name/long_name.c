#include <stdio.h>

#define MAXLINE 10

// Definine a function
int get_line(char s[], int limit);
void copy(char from[], char to[]);


int main() {
	int len;
	int max = 0;
	char line[MAXLINE];
	char longest[MAXLINE];

	printf("\nEnter list of name\n");
	printf("To finish press ctrl+d\n");
	while((len = get_line(line, MAXLINE)) > 0) {
		if(len > max) {
			max = len;
			copy(line, longest);
		}

		printf("`-> (%d char)\n\n", len-2);

	}
	if(max > 0) {
		printf("\nLongest line : %s\n", longest);
	}
	return 0;
}

int get_line(char s[], int limit) {
	int c, i;
	for(i=0; i<limit-1 && (c=getchar()) != EOF && c!='\n'; i++) {
		s[i] = c;
	}

	// if input length still less than limit-1
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';

	// if input exceeds limit-1
	while(c != EOF && c != '\n') {
		++i;
		c = getchar();
	}
	if (c == '\n') {
		++i;
	}

	return i;
}

void copy(char from[], char to[]) {
	int i = 0;
	while((to[i] = from[i]) != '\0') {
		++i;
	}
}
