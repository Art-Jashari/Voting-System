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





// FUNCTIONS -----------------------------------------------------------------------------
// Here, the functions to handle the system's possible actions will be added.


//This extracts the year from the userID -- For example, userID:2018btecs00064 year:2024
int extractYear(char userID[15]){
    int year = 0;
    char tmp;
    for (int i = 0; i < 4; ++i) {
        tmp = userID[i];
        year = (year * 10) + (tmp - 48);
    }
    return year;
}

int extractRollNo(char userID[15]) {
    int rollNo = 0;
    char tmp;
    for (int i = 0; i < 14; i++) {
        tmp = userID[i];
        rollNo = (rollNo * 10) + (tmp - 48);
    }
    return rollNo;
}

// This checks whether the inputed branch code is matching with the global branch code or not.
int checkBranchCode(char userID[15]) {
    char branchCode[6];
    for (int i = 4; i < 9; i++) {
        branchCode[i-4] = userID[i];
    }
    branchCode[5] = '\0';
    if(strcmp(branchCode, currentValidId.branch) == 0)
        return 1;
    else
        return 0;
}

int authenticateAdmin(){
    char username[15], password[6];

    // Admin username: Admin
    // Admin password: admiN

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

void banID() {
    printf("\nCreating Banned.txt...\n");
    FILE *fp = fopen("Banned.txt", "w");
    if (fp == NULL) {
        printf("Error: Banned.txt was not created.");
        fclose(fp);
        return;
    }

    printf("Enter the last roll number to ban\nPress 0 to exit...");
    int input;
    while (1) {
        printf("\nEnter Number: ");
        scanf("%d", &input);
        if (input == 0)
            break;
        studentVotes[input - 1] = '$';
        fprintf(fp, "%d\n", input);
    }

    fclose(fp);
    printf("\nBanned.txt created successfully.\n");
}

void createCandidateFiles(){
    printf("\nCreating candidate files...\n");
    FILE *fp;
    char filename[20];
    for (int i = 0; i <= numberOfCandidates; i++) {
        sprintf(filename, "Candidate%d.txt", i);
        fp = fopen(filename, "w");
        fprintf(fp, "0\n%s", candidateArray[i-1].cname);
        fclose(fp);
    }
    printf("\nCreated files successfully.\n");
}

void deleteIllegalVote(){}

void studentPanel(){}



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



void banID(){}

void saveVote(){}


void initiateNewElection(){
    printf("\nNew Election Initiation:\n");
    printf("\nElections for which year: ");
    scanf("d", &currentValidId.year);
    printf("\nEnter branch code: ");
    scanf("%s", currentValidId.branch);
    printf("\nMax roll no.:");
    scanf("%d", &currentValidId.totalVoters);
    printf("\nEnter the no. of candidates:");
    scanf("%d", &numberOfCandidates);

    for (int i = 0; i < currentValidId.totalVoters; i++) {
        studentVotes[i] = '0';
    }

    for (int i = 0; i < numberOfCandidates; i++) {
        candidateArray[i].cid = i + 1;
        printf("\nEnter name of candidate %d: ", i + 1);
        scanf("%s", candidateArray[i].cname);
        candidateArray[i].votes = 0;
    }
}

int getWinner(){}
int extractRollNum(){}

// ---------------------------------------------------------------------------------------



