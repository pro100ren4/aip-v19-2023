#include "../inc/Bull.h"
#include <iostream>

Bull::Bull(float weight)
{
    std::cout << "\n[system] Called Bull constructor\n";
    this->weight = weight;
}

Bull::~Bull()
{
    std::cout << "\n[system] Called Bull destructor\n";
}

void Bull::Butt()
{
    std::cout << "I'm butting" << std::endl;
}

void Walk(float speed)
{
    std::cout << "I'm walking like bull with speed: " << speed << std::endl;
}