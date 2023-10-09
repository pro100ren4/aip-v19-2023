#pragma once

class Food
{
private:
    double calories;
public:
    Food(double calories);
    Food();
    ~Food();
public:
    void Eat();
    double GetCalories();
    void SetCalories(double calories);
};
