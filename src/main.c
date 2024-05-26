#include <stdio.h>
#include "../include/election.h"

// Logic will be handled in a different header file.
// Here is where that logic will run.

int main() {
    int choice;
    while (1) {
        printf("\n1. Admin Panel\n2. Student Panel\n3. Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                adminPanel();
                break;
            case 2:
                studentPanel();
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid Choice\n");
        }
    }
    return 0;
}
