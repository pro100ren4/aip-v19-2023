#include "../inc/Curd.h"
#include <string>
#include <iostream>

Curd::Curd(double calories, float fatContent, double density, bool isLactose, std::string filler)
{
    SetCalories(calories);
    SetFatContent(fatContent);
    SetDensity(density);
    SetLactose(isLactose);
    SetFiller(filler);
}

Curd::Curd()
{
    SetCalories(0);
    SetFatContent(0.0);
    SetDensity(0.0);
    SetLactose(true);
    SetFiller("None");
}

Curd::~Curd()
{
}

double Curd::GetDensity()
{
    return density;
}

void Curd::SetDensity(double density)
{
    if (density >= 110 && density <= 146)
        this->density = density;
    else if (density >= 146)
        this->density = 146;
    else
        this->density = 110;
}

std::string Curd::GetFiller()
{
    return filler;
}

void Curd::SetFiller(std::string filler)
{
    this->filler = filler;
}

void Curd::Eat()
{
    std::cout << "I'm eat a curd" << std::endl;
}