#include <iostream>
#include "../inc/Curd.h"

int main(int argc, char const *argv[])
{
    Curd curd1;
    Curd curd2(120.0, 8.0f, 130.0, true, "None");

    curd1.SetCalories(14000);
    std::cout << curd1.GetFatContent() << std::endl;
    curd1.Eat();
    curd2.DairyProducts::Eat();
    curd2.Food::Eat();
}
