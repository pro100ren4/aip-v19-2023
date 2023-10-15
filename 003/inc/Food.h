#pragma once

class Food
{
private:
    double calories;
public:
    Food(double calories);
    Food();
    virtual ~Food();
public:
    virtual void Eat() = 0;
    double GetCalories();
    void SetCalories(double calories);
};
