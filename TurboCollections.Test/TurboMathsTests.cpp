
#include "TurboMaths.h"
#include "gtest/gtest.h"

namespace TurboCollections
{
    namespace TurboMathsTests
    {
        TEST(SayHello, WorksWithoutExeception)
        {
            TurboMaths::SayHello();

            SUCCEED();
  
        }
        TEST(GetEvenNumbersList, IteratorWorks)
        {
            int maxNumber=12;
            TurboMaths::GetEvenNumbersList(maxNumber);
            SUCCEED();
        }
    }
    
}

