#include <stdio.h>

#define MAXCHAR 1000

/*function declaration*/
void name_input(char list_of_name[]);
char command_input(char command[]);
void separated_name(char from_combined[]);


int main() {
    char list_of_name[MAXCHAR];
    char command[MAXCHAR];

    printf("\n[NAME INPUT]");
    printf("\nInput list of name in one line separated by coma (,)\n");
    printf("example : 1st name,2nd name,....(ENTER)\n");
    printf("> ");
    name_input(list_of_name);
    
    printf("\n[COMMAND INPUT]");
    printf("\ntype 'help' to see available command\n");
    printf("> ");
    command_input(command);
    printf("%s\n", command);

    return 0;
}

void name_input(char list_of_name[]) {
    int name_list;
    int i = 0;
    while ((name_list = getchar()) != EOF) {
        list_of_name[i] = name_list;

        if (name_list == '\n') {
            list_of_name[++i] = name_list = '\0';
            break;
        }
        ++i;
    }
}


char command_input(char command[]) {
    int cmmd;
    int i = 0;
    while ((cmmd = getchar()) != EOF) {
        command[i] = cmmd;
        if (cmmd == '\n') {
            command[i] = cmmd;
            command[i] = '\0';
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
            from_combined[i] = '=';
        }
        ++i;
    }
}
