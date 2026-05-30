#include <stdio.h>
#define MAXLINE  5

void input_menu(char input[]);
int validation(char check_pw[], char validate_pw[]);
int overflow_checker(char input[]);

int main() {
    char host_name[MAXLINE];
    char password[MAXLINE];
    char validate_host_name[MAXLINE];
    char validate_password[MAXLINE];

    char overflow_message[21] = "(!) Input must </= 5\n";

    /*Get Host name and Password*/
    printf("____Login____\n");
    printf("Host Name    : ");

    while (1) {
        input_menu(host_name);
        overflow_checker(host_name);

        if ((overflow_checker(host_name) == 0)) {
            break;
        }
        printf("%s", overflow_message);
        printf("Host Name    : ");
    }

    printf("Password     : ");
    input_menu(password);

    /*Check Host name and Password*/
    printf("\n__Validation_\n");
    printf("Host Name    : ");
    input_menu(validate_host_name);
    printf("Password     : ");
    input_menu(validate_password);
    
    if (validation(password, validate_password) == 1 && (validation(host_name, validate_host_name) == 1)) {
        printf("Login Successful\n");
    }
    else {
        printf("Login Failed\n");
    }
    return 0;
}


void input_menu(char password[]) {
    int password_input, i;

    i = 0;
    while ((password_input=getchar()) != EOF) {
        password[i] = password_input;
        ++i;

        if (password_input == '\n') {
            password[i-1] = '\0';
            break;
        }
    }
    if (i=0 || password[i-1] != '\0') {
        password[i] = '\0';
    }
}


int validation(char check_input[], char validate_input[]) {
    int correct = 1;
    int j = 0;

    while (check_input[j] != '\0' && validate_input[j] != '\0') {
        ++j;

        if (check_input[j] != validate_input[j]) {
            correct = 0;
            break;
        }
    }
    return correct;
}


int overflow_checker(char input[]) {
    int i;
    int overflow = 0;

    for(i=0; input[i] != '\0'; i++) {
        if(i > MAXLINE-1) {
            overflow = 1;
        }
    }
    return overflow;
}




