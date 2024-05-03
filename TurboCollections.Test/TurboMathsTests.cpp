
#include "TurboMaths.h"
#include "gtest/gtest.h"
#include "gmock/gmock-matchers.h"

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
            std::vector<int> numbers = TurboMaths::GetEvenNumbersList(maxNumber);
            EXPECT_THAT(numbers, testing::ElementsAre(0,2,4,6,8,10,12));
        }
    }
    
}

