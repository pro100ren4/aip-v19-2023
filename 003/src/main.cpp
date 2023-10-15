#include <iostream>
#include "../inc/Food.h"
#include "../inc/Curd.h"

int main(int argc, char const *argv[])
{
    Food* food;
    food = new DairyProducts(1000, 13, true);
    food->Eat();
    delete food;
    return 0;
}
