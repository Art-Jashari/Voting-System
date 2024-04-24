//
// Created by Art on 24/04/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

// Here is where the logic will be handled through corresponding methods

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
}CANDIDATE;

// GLOBALS -------------------------------------------------------------------------------

struct currentValidID currentValidId; // Stores current valid user ID parameters.
CANDIDATE candidateArray[20]; // Stores the information of all candidates.
int numberOfCandidates; // Total number of candidates.
char studentVotes[200]; // Stores the information of the votes submited by each student.

// ---------------------------------------------------------------------------------------







