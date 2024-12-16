#include "../TurboCollections/Include/TurboSort.h"
#include "gtest/gtest.h"
#include "gmock/gmock-matchers.h"

namespace TurboCollections
{
    namespace SelectionSortTests
    {
        TEST(BubbleList, SortInRightOrder)
        {
            std:: vector<int> list {5,6,2,3,1,4};
            TurboSort:: BubbleSort(list);
            EXPECT_THAT(list, testing:: ElementsAre(1,2,3,4,5,6));
        }
    }
}
