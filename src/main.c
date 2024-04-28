#include <stdio.h>
#include "../include/election.h"

// Logic will be handled in a different header file.
// Here is where that logic will run.

int main() {
    char input;

    while (1) {
        
        printf("\n\t\t\t   1.Student panel \n\t\t\t   2.Admin panel \n\t\t\t   3.Exit \n\t\t\t   Option:");
        scanf("%c", &input);

        switch (input) {
            case '1':
                studentPanel();
                break;
            case '2':
                adminPanel();
                break;
            case '3':
                return 0;
            default:
                printf("\nInvalid option");
                getch();

        }
    }

    return 0;
}
