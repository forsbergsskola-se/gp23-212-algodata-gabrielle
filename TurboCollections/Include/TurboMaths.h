#pragma once
#include <vector>
#include <iostream>
using namespace std;

namespace TurboCollections
{
    class TurboMaths
    {
        TurboMaths() =delete;
    public:
        static void SayHello();
        static std::vector<int> GetEvenNumbersList(int maxNumber);
        static void PrintNumber();
    
    };

}