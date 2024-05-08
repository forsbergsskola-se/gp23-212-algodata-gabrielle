#include <gmock/internal/gmock-internal-utils.h>
#include "../TurboCollections/TurboLinkedStack.h"
#include "gtest/gtest.h"
#include "gmock/gmock-matchers.h"

namespace TurboCollections
{
    namespace TurboLinkedStackTests
    {
        TEST(LinkedStack, TurboLinkedStack)
        {
            TurboLinkedStack<int> stack;
            
            stack.push(10);
            stack.push(20);
            stack.push(30);
            
            assert(stack.LastNode->Value == 30);
            assert(stack.LastNode->Previous->Value == 20);
            assert(stack.LastNode->Previous->Previous->Value == 10);

        }
    }
}


