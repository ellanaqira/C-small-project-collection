#include <stdio.h>

#define MAXCHAR 1000

/*function declaration*/
void input_menu(char input[], int limit);
int get_names(char input[], int limit);
void copy(char from[], char to[]);
void listed_name(char from_combined[]);
int string_comparison(char str1[], char str2[]);


int main() {
    char names[MAXCHAR];
    char raw_names[MAXCHAR];
    char command[MAXCHAR];
    char longest[MAXCHAR];
    char available_cmd[] = "'help' - show all available commands\n'list' - print name line by line\n'longest - show the longest name'\n'quit' - ends the program\n";

    int len;
    int max = 0;

    printf("\n[NAME INPUT]");
    printf("\nInput list of name in one line separated by coma (,)\n");
    printf("example : 1st name,2nd name,....(ENTER)\n");
    
    while ((len = get_names(names, MAXCHAR)) > 0) {
        if (len > max) {
            max = len;
            copy(names, longest);
        }
    }


    printf("\n[COMMAND INPUT]");
    printf("\ntype 'help' to see available command");


    while (1) {
        printf("\n> ");
        input_menu(command, MAXCHAR);

        if (string_comparison(command, "quit")) {
            break;
        }
        else if (string_comparison(command, "help")) {
            printf("%s", available_cmd);
        }
        else if (string_comparison(command, "list")) {
            listed_name(names);
            printf("%s\n", names);
        }
        else if (string_comparison(command, "longest")) {
            if (max > 0) {
                printf("longest name : %s\n", longest);
            }
        }
        else {
            printf("commands not available\n");
        }
    }    
    return 0;
}


void input_menu(char input[], int limit) {
    int keyboard_input;
    int i = 0;
    while ((keyboard_input = getchar()) != EOF) {
        if (i >= (limit-1)) {
            break;
        }
        input[i] = keyboard_input;
        if (keyboard_input == '\n') {
            input[i] = '\0';
            break;
        }
        ++i;
    }
}


int get_names(char input[], int limit) {
    int c, i;


    for (i=0; i<limit-1 && (c=getchar()) != EOF && c!=','; ++i) {
        if (c == '\n') {
            input[i] = '\0';
            break;
        }

        input[i] = c;

    }

    if (c == ',') {
        input[i] = '\0';
    }
    return i;
}


void copy(char from[], char to[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}


void listed_name(char from_combined[]) {
    int i, n;
    i = n = 0;

    while (from_combined[i] != '\0') {
        if (from_combined[i] == ',') {
            from_combined[i] = '\n';
        }
        ++i;
    }
}


int string_comparison(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] == str2[i] ) {
        if (str1[i] == '\0') {
            return 1;
        }
        ++i;
    }
    return 0;
}