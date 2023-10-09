#pragma once

#include <string>

class Clerk
{
private:
    
    unsigned long uid, experience;
    std::string surname, name, job, group;
    double salary;

public:
    Clerk(unsigned long uid, unsigned long experience, std::string surname, std::string name, std::string job, std::string group, double salary);
    Clerk();
    ~Clerk();
    
    std::string GetName(ulong key);
};