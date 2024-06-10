#include <iostream>
#include "TurboMaths.h"

int main(int argc, char* argv[])
{
    int maxNumber{12};
    std::vector<int>evenNumbers = TurboCollections::TurboMaths::GetEvenNumbersList(maxNumber);
    for (auto number : evenNumbers)
    {
        std::cout<<number<<std::endl;
    }
    TurboCollections::TurboMaths::PrintNumber();
    return 0;
}

