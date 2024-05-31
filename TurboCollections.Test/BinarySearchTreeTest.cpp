#include "TurboBinarySearchTree.h"
#include "../TurboCollections/Include/TurboSort.h"
#include "gtest/gtest.h"
#include "gmock/gmock-matchers.h"

namespace TurboCollections
{
    namespace BinarySearchTreeTest
    {
        //TurboBinarySearchTree<int> numbers;
        
        TEST(BinarySearchTreeDelete, ReturnsTrueIfItemFound)
        {
            TurboBinarySearchTree<int> tree{};
            tree.Insert(3);
            tree.Insert(5);
            tree.Insert(1);
            EXPECT_TRUE(tree.Delete(5));
        }

        TEST(BinarySearchTreeDelete, ReturnsFalseIfItemNotFound)
        {
            TurboBinarySearchTree<int> tree{};
            tree.Insert(3);
            tree.Insert(5);
            tree.Insert(1);
            EXPECT_FALSE(tree.Delete(4));
        }

        TEST(BinarySearchTreeDelete, RemovesFoundItem)
        {
            TurboBinarySearchTree<int> tree{};
            tree.Insert(3);
            tree.Insert(5);
            tree.Insert(1);
            tree.Delete(5);
            EXPECT_FALSE(tree.Search(5));
        }

        
    }
}
