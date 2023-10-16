#include <iostream>
#include "../inc/Satyr.h"

int main(int argc, char const *argv[])
{
    Satyr satyr1{170, true, 200, 80};
    Satyr *satyr2 = new Satyr(150, false, 100, 110);

    satyr1.Butt();
    satyr1.PlayFlute();
    satyr1.Think();
    satyr1.Walk(25);

    satyr2->Butt();
    satyr2->PlayFlute();
    satyr2->Think();
    satyr2->Walk(40);

    delete satyr2;

    return 0;
}