#pragma once
#include "DairyProducts.h"
#include <string>

class Curd:public DairyProducts
{
private:
    double density;
    std::string filler;
public:
    Curd(double calories, float fatContent, double density, bool isLactose, std::string filler);
    Curd();
    ~Curd();
public:
    double GetDensity();
    void SetDensity(double density);
    std::string GetFiller();
    void SetFiller(std::string filler);
    void Eat();
};