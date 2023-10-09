#pragma once

typedef struct Clerk
{
    unsigned long uid, experience;
    char surname[20], name[20], job[20], group[20];
    double salary;
} Clerk;

Clerk CreateClerk (unsigned long uid, unsigned long experience, char surname[20], char name[20], char job[20], char group[20], double salary);

void DeleteClerk();

Clerk ClreateClerk();

char* GetClerkName(Clerk clerk, unsigned long keyExp);