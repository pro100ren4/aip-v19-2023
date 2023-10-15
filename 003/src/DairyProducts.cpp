#include "../inc/DairyProducts.h"
#include <iostream>

DairyProducts::DairyProducts(double calories, float fatContent, bool isLactose)
{
    SetCalories(calories);
    SetFatContent(fatContent);
    SetLactose(fatContent);
}

DairyProducts::DairyProducts()
{
    SetCalories(0);
    SetFatContent(0);
    SetLactose(true);
}

DairyProducts::~DairyProducts()
{
    std::cout << "\n[system] Called dairy products virtual destructor\n";
}

bool DairyProducts::IsLactose()
{
    return isLactose;
}

void DairyProducts::SetLactose(bool isLactose)
{
    this->isLactose = isLactose;
}

float DairyProducts::GetFatContent()
{
    return fatContent;
}

void DairyProducts::SetFatContent(float fatContent)
{
    if (fatContent > 0.0f && fatContent <= 14.0f)
        this->fatContent = fatContent;
    else if (fatContent > 14.0f)
        this->fatContent = 14.0f;
    else
        fatContent = 0.0f;
}

void DairyProducts::Eat()
{
    std::cout << "I'm eat a " << (IsLactose()? "non" : "") << " lactose dairy product with " << GetCalories() << "kcal " << GetFatContent() << "fat " << std::endl; 
}
