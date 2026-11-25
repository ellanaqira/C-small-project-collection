#include <stdio.h>
#include <unistd.h>

// constant
#define MAXCHAR 100

// function declarartion
void loading(char s[]);
void sleep_ms(int milliseconds);
void input_direction(void);

int main(void) {
    input_direction();
    return 0;
}


void sleep_ms(int milliseconds) {
    // Convert milliseconds to microseconds
    usleep(milliseconds * 1000);
}

void loading(char s[]) {
    short i = 0;
    while (s[i] != '\0') {
        printf("%c", s[i]);
        printf("\b");
        fflush(stdout);
        sleep_ms(150);
        i++;
    }
    printf("\nLoading successful\n");
}

void input_direction(void) {
    char clockws[MAXCHAR] = "|/-\\|/-\\|/-\\|/-\\|/-\\|/-\\|/-\\|/-\\|.";
    char unclockws[MAXCHAR] = "|\\-/|\\-/|\\-/|\\-/|\\-/|\\-/|\\-/|\\-/|.";

    int num = 0;

    printf(" _____  _____\n");
    printf("| --> || <-- |\n");
    printf("|__1__||__2__|\n");

    printf("Choose Direction > ");
    scanf("%d", &num);

    if (num == 1) {
        loading(clockws);
    }
    else if (num == 2) {
        loading(unclockws);
    }
    else {
        printf(".\n");
        printf("Option not included\n");
    }
}

