#include "TurboBinarySearchTree.h"
#include "../TurboCollections/Include/TurboSort.h"
#include "gtest/gtest.h"
#include "gmock/gmock-matchers.h"

namespace TurboCollections
{
    namespace BinarySearchTreeTest
    {
        TurboBinarySearchTree<int> numbers;
        
            TEST(binary_search_tree_test, InsertMultipleValues)
            {
                numbers.Insert(5);
                numbers.Insert(3);
                numbers.Insert(7);

                ASSERT_NE(numbers.root, nullptr);
                EXPECT_EQ(numbers.root->value, 5);

                ASSERT_NE(numbers.root->left, nullptr);
                EXPECT_EQ(numbers.root->left->value, 3);

                ASSERT_NE(numbers.root->right, nullptr);
                EXPECT_EQ(numbers.root->right->value, 7);
            }

        
    }
}
