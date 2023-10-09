#include "../inc/Food.h"
#include <iostream>

Food::Food(double calories)
{
    SetCalories(calories);
}

Food::Food()
{
    SetCalories(0);
}

Food::~Food()
{
   calories = 0;
}

void Food::Eat()
{
    std::cout << "I'm eating food with " << calories << std::endl;
}

double Food::GetCalories()
{
    return calories;
}

void Food::SetCalories(double calories)
{
    if(calories > 0 && calories <= 862000)
        this->calories = calories;
    else if (calories > 862000)
        this->calories = 862000;
    else 
        this->calories = 0;
}