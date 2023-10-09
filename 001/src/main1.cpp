#include <iostream>
#include "../inc/ClerkSt.h"

Clerk InputClerk();
void PrintClerksWithSpecificExp(Clerk clerks[], int clerksSize, int keyExp);

int main(int argc, char const *argv[])
{
    unsigned int clerkNumber = 0;
    std::cout << "Enter the data size: ";
    std::cin >> clerkNumber;
    Clerk* clerks = new Clerk[clerkNumber];

    for (int i = 0; i < clerkNumber; ++i)
    {
        clerks[i] = InputClerk();
    } 

    char action;

    bool isRunnig = true;
    while (isRunnig)
    {
        system("clear");
        std::cout << "==MENU==\n";
        std::cout << "1 - Print clerks with specific work exp\n";
        std::cout << "2 - Hello\n";
        std::cout << "3 - Exit\n";
        std::cout << "\nEnter action: ";
        std::cin >> action;
        switch (action)
        {
            case '1':
                //int keyExp = 0;
                std::cout << "Enter the specific expirience: ";
                //std::cin >> keyExp;
                PrintClerksWithSpecificExp(clerks, clerkNumber, 1);
                break;
            case '2':
                std::cout << "Hello!\n";
                break;
            case '3':
                delete[] clerks; 
                isRunnig = false;
                break;
            default:
                std::cout << "Something goes wrong :(\n";
                break;
        }
        //system("pause");
        std::cout << "Enter something";
        std::cin >> action;   
    }
    
    return 0;
} 

void PrintClerksWithSpecificExp(Clerk clerks[], int clerksSize, int keyExp)
{
    char* clerkName;
    for (int i = 0; i < clerksSize; i++)
    {
        clerkName = GetClerkName(clerks[i], keyExp);
        if(clerkName)
            std::cout << clerkName << std::endl;
        else
            std::cout << "This clerk din't have enough exp";
    }   
}