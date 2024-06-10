#include "TurboMaths.h"
#include <iostream>


    void TurboCollections::TurboMaths::SayHello()
    {
        std:: cout<< "Hello, I'm " << typeid(TurboMaths).name() << "\n";
    }

    std::vector<int> TurboCollections::TurboMaths::GetEvenNumbersList(int maxNumber)
    {
        std::vector<int> evenNumbers;
        for (int i=0;i<=maxNumber;i+=2)
        {
            evenNumbers.push_back(i);
        }
        return evenNumbers;
    }
void TurboCollections::TurboMaths::PrintNumber()
{
        std::vector<int>numbers{1,1,2,3,5};
        auto iterator = numbers.begin();
        while (iterator != numbers.end())
        {
            std::cout << *iterator<<std::endl;
            iterator++;
        }
}



