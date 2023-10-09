#pragma once

#include "Food.h"

class DairyProducts:public Food
{
private:
    bool isLactose;
    float fatContent;
public:
    DairyProducts(double calories, float fatContent, bool isLactose);
    DairyProducts();
    ~DairyProducts();
public:
    bool IsLactose();
    void SetLactose(bool isLactose);
    float GetFatContent();
    void SetFatContent(float fatContent);
    void Eat();
};