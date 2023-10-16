#include "../inc/Satyr.h"
#include <iostream>

Satyr::Satyr(float height, bool canPlayFlute, int iq, float weight): Human(iq), Bull(weight)
{
    std::cout << "\n[system] Called Satyr constructor\n";
    this->height = height;
    this->canPlayFlute = canPlayFlute;
}

Satyr::~Satyr()
{
    std::cout << "\n[system] Called Satyr destructor\n";
}

void Satyr::PlayFlute()
{
    if(canPlayFlute)
        std::cout << "I'm playing flute" << std::endl;
    else
        std::cout << "I'm can't play flute" << std::endl;
}

void Satyr::Walk(float speed)
{
    std::cout << "I'm walking like satyr with speed: " << speed << std::endl;
}
