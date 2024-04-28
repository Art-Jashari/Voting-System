//
// Created by Art on 24/04/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

// In this file is where the logic will be handled through corresponding methods

#ifndef VOTING_SYSTEM_ELECTION_H
#define VOTING_SYSTEM_ELECTION_H

#endif //VOTING_SYSTEM_ELECTION_H

struct currentValidID{
    int year;
    char branch[6];
    int totalVoters;
};

typedef struct candidate{
    int cid;
    char cname[20];
    int votes;
} CANDIDATE;



// GLOBALS -------------------------------------------------------------------------------

struct currentValidID currentValidId; // Stores current valid user ID parameters.
CANDIDATE candidateArray[20]; // Stores the information of all candidates.
int numberOfCandidates; // Total number of candidates.
char studentVotes[200]; // Stores the information of the votes submited by each student.

// ---------------------------------------------------------------------------------------




// Here, the functions to handle the system's possible actions will be added.
// FUNCTIONS -----------------------------------------------------------------------------


int extractYear(char userID[15]){
    int year = 0;
    char tmp;
    for (int i = 0; i < 4; ++i) {
        tmp = userID[i];
        year = (year * 10) + (tmp - 48);
    }
    return year;
}


void studentPanel(){}

int authenticateAdmin(){
    char username[15], password[6];

    printf("\nEnter username: ");
    scanf("%s",username);
    if((strcmp(username,"Admin"))!=0)
        return 0;
    else {
        printf("Enter Password: ");
        int i = 0;
        for(i = 0; i < 5 ; i++) {
            password[i]=getch();
            printf("%c",'*');
        }
        password[i]='\0';
        if((strcmp(password,"admiN"))!=0)
            return 0;
    }
    return 1;
}

void adminPanel(){
    while (1) {
        if (authenticateAdmin() != 1) {
            printf("\n Wrong username or Password. \n");
            break;
        }
    }

    while (1) {
        char inputID[15];
        char input;
        char banInp;
        int WinnerCid;
        int totalVotedNow = 0;
        printf("\n1. New Election"
               "\n2. Continue Previous Election"
               "\n3. Delete Illegal Vote"
               "\n4. Ban User IDs\n5. Result\n6. Log Out\n\n Option: ");
        scanf("%c", &input);

        switch (input) {
            // Logic to implement the options and methods for the admin.
        }

    }
}


int checkBranchCode(){  // Will check whether the inputed branch code is matching with the global branch code.

}
void banID(){}

void saveVote(){}
void deleteIllegalVote(){}

void initiateNewElection(){}
int getWinner(){}
int extractRollNum(){}

void createCandidateFiles(){}



// ---------------------------------------------------------------------------------------



