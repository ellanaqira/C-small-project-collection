#include <stdio.h>

#define MAXLINE 100


// Function Declaration
int get_names(char line[], int line_limit);
void copy(char from[], char to[]);
int str_compare(char str1[], char str2[]);


int main() {
    // Variable Declarartion
    int len;
    int max = 0;
    int name_number = 1;
    char names[MAXLINE];
    char longest[MAXLINE];
    char command[MAXLINE];
    char available_command[] = "'help' - show available command\n'long' - show longest name\n'num' show number of names\n'-Q' - quit\n\n";

    printf("\n[ Input Name ]\n");
    printf("Type '-F' at a newline to finish\n");
    printf("Enter list of name:\n");
    printf("%d. ", name_number);
    while ((len = get_names(names, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy (names, longest);
        }

        if (str_compare(names, "-F\n")) {
            printf("---Finish---\n");
            break;
        }
        ++name_number;
        printf("%d. ", name_number);
    }

    printf("\n[ Input Command ]\n");
    printf("type 'help' to see available command\n");
    while ((get_names(command, MAXLINE)) > 0) {

        if (str_compare(command, "help\n")) {
            printf("%s", available_command);
        }
        else if (str_compare(command, "long\n")) {
            printf("The longest name (%d char): %s\n", max-1, longest);
        }
        else if (str_compare(command, "num\n")) {
            printf("%d name(s)\n\n", name_number-1);
        }
        else if (str_compare(command, "-Q\n")) {
            printf("Quit\n");
            break;
        }
        else {
            printf("Command not include\n\n");
        }
    }
    return 0;
}

int get_names(char line[], int line_limit) {
    int c, i;

    for (i=0; i<line_limit-1 && (c=getchar()) != EOF && c!='\n'; ++i) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}


void copy(char from[], char to[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}


int str_compare(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] == str2[i]) {
        if (str1[i] == '\0' && str2[i] == '\0') {
            return 1;
        }
        ++i;
    }
    return 0;
}

