#include "../inc/ClerkSt.h"
#include <stdlib.h>
#include <string.h>
#include <iostream>

char *GetClerkName(unsigned long keyExp)
{
    return nullptr;
}

Clerk CreateClerk (unsigned long uid, unsigned long experience, char surname[20], char name[20], char job[20], char group[20], double salary)
{
    printf("CreateClerk with params called");
    Clerk newClerk;
    newClerk.uid = uid;
    newClerk.experience = experience;
    strcpy(newClerk.surname, surname);
    strcpy(newClerk.name, name);
    strcpy(newClerk.job, job);
    strcpy(newClerk.group, group);
    newClerk.salary = salary;
    return newClerk;
}

Clerk ClreateClerk()
{
    printf("CreateClerk called");
    Clerk newClerk;
    newClerk.uid = 0;
    newClerk.experience = 0;
    newClerk.surname[0] = '\0';
    newClerk.name[0] = '\0';
    newClerk.job[0] = '\0';
    newClerk.group[0] = '\0';
    newClerk.salary = 0;   
}

Clerk InputClerk()
{
    Clerk newClerk;

    std::cout << "Input the uid: ";
    std::cin >> newClerk.uid;
    std::cout << "Input the name: ";
    std::cin >> newClerk.name;
    std::cout << "Input the surname: ";
    std::cin >> newClerk.surname;
    std::cout << "Input the job: ";
    std::cin >> newClerk.job;
    std::cout << "Input the experience: in years ";
    std::cin >> newClerk.experience;
    std::cout << "Input the group: ";
    std::cin >> newClerk.group;
    std::cout << "Input the salary: ";
    std::cin >> newClerk.salary;

    // Clerk* newClerk = new Clerk(uid, experience, surname, name, job, group, salary);
    // return *newClerk;
    return  newClerk;
}

char* GetClerkName(Clerk clerk, unsigned long keyExp)
{
    return clerk.experience >= keyExp? clerk.name : NULL;
}