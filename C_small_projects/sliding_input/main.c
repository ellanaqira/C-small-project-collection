
/* This code prints the text "Hello!" sliding downwards whenever you press any key. */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

// Data
struct termios OrigTermSet;


// Functions Declaration
void enableRawMode();
void disableRawMode();


// Main
int main() {
    enableRawMode();

    char c;
    while (read(STDIN_FILENO, &c, 1) == 1 && c != 'q') {
        if (iscntrl(c)) {
            printf("Hello!\n");
        }
        else {
            printf("Hello!\n");
        }
    }
    return 0;
}


// Functions Definition
void disableRawMode() {
    tcsetattr(STDIN_FILENO, TCSAFLUSH, &OrigTermSet);
}

void enableRawMode() {
    tcgetattr(STDIN_FILENO, &OrigTermSet);

    struct termios ModifTermSet = OrigTermSet;
    ModifTermSet.c_iflag &= ~(ICRNL | IXON);
    ModifTermSet.c_oflag &= ~(OPOST);
    ModifTermSet.c_lflag &= ~(ECHO | ICANON | IEXTEN | ISIG);

    tcsetattr(STDIN_FILENO, TCSAFLUSH, &ModifTermSet);

    atexit(disableRawMode);
}