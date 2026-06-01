#include <stdio.h>

#define MAXCHAR 1000

/*function declaration*/
void input_menu(char input[]);
void separated_name(char from_combined[]);
int string_comparison(char str1[], char str2[]);


int main() {
    char list_of_name[MAXCHAR];
    char command[MAXCHAR];
    char available_cmd[] = "'help' - to show all available commands\n'list' - print name line by line\n'quit' - ends the program\n";
    // if (string_comparison("help\0", "help") == 1) {
    //     printf("corect\n");
    // }

    // else {
    //     printf("false\n");
    // }
    printf("\n[NAME INPUT]");
    printf("\nInput list of name in one line separated by coma (,)\n");
    printf("example : 1st name,2nd name,....(ENTER)\n");
    printf("> ");
    input_menu(list_of_name);
    
    printf("\n[COMMAND INPUT]");
    printf("\ntype 'help' to see available command");


    while (1) {
        printf("\n> ");
        input_menu(command);

        if (string_comparison(command, "quit") == 1) {
            break;
        }
        else if (string_comparison (command, "help") == 1) {
            printf("%s", available_cmd);
        }
        else if (string_comparison (command, "list") == 1) {
            separated_name(list_of_name);
            printf("%s\n", list_of_name);
        }
        else {
            printf("commands not available\n");
        }
    }    

    return 0;
}

void input_menu(char input[]) {
    int keyboard_input;
    int i = 0;
    while ((keyboard_input = getchar()) != EOF) {
        input[i] = keyboard_input;
        if (keyboard_input == '\n') {
            input[i] = '\0';
            break;
        }
        ++i;
    }
}


void separated_name(char from_combined[]) {
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