#include "../inc/Human.h"
#include <iostream>

Human::Human(int iq)
{
    std::cout << "\n[system] Called Human constructor\n";
    this->iq = iq;
}

Human::~Human()
{
    std::cout << "\n[system] Called Human destructor\n";
}

void Human::Think()
{
    std::cout << "I'm thinking" << std::endl;
}

void Human::Walk(float speed)
{
    std::cout << "I'm walking like human with speed: " << speed << std::endl;
}