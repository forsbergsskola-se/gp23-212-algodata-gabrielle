
#include "../TurboCollections/Include/TurboMaths.h"
#include "gtest/gtest.h"

namespace TurboCollections
{
    namespace TurboMathsTests
    {
        TEST(SayHello, WorksWithoutExeception)
        {
            TurboCollections::TurboMaths::SayHello();

            SUCCEED();
  
        }
    }
    
}

