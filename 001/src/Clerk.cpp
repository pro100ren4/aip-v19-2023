#include "../inc/Clerk.h"
#include <iostream>

Clerk::Clerk(unsigned long uid, unsigned long experience, std::string surname, std::string name, std::string job, std::string group, double salary)
{
    std::cout << "constructor param" << std::endl; 
    this->uid = uid;
    this->experience = experience;
    this->surname = surname;
    this->name = name;
    this->job = job;
    this->group = group;
    this->salary = salary;
}

Clerk::Clerk()
{
    std::cout << "constructor" << std::endl;
    this->uid = 0;
    this->experience = 0;
    this->surname = "";
    this->name = "";
    this->job = "";
    this->group = "";
    this->salary = 0.0;
}

Clerk::~Clerk()
{
    std::cout << "destructor" << std::endl;
}

std::string Clerk::GetName(unsigned long key)
{
    return experience >= key ? name : "";
}