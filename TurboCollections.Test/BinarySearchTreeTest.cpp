#include "TurboBinarySearchTree.h"
#include "../TurboCollections/Include/TurboSort.h"
#include "gtest/gtest.h"
#include "gmock/gmock-matchers.h"

namespace TurboCollections
{
    namespace BinarySearchTreeTest
    {
        TurboBinarySearchTree<int> tree;
        
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
            EXPECT_FALSE(tree.Delete(6));
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
        
    };

    TEST(BSTTest, InsertTest)
    {
        TurboBinarySearchTree<int> tree{};

        tree.Insert(10);
        tree.Insert(5);
        tree.Insert(15);
        tree.Insert(3);
        tree.Insert(7);
        tree.Insert(12);
        tree.Insert(17);
        
        EXPECT_TRUE(tree.Search(10));
        EXPECT_TRUE(tree.Search(5));
        EXPECT_TRUE(tree.Search(15));
        EXPECT_TRUE(tree.Search(3));
        EXPECT_TRUE(tree.Search(7));
        EXPECT_TRUE(tree.Search(12));
        EXPECT_TRUE(tree.Search(17));
        
        tree.Insert(6);
        EXPECT_TRUE(tree.Search(6));
        tree.Insert(14);
        EXPECT_TRUE(tree.Search(14));
    }

    TEST(BSTTest, SearchTest)
    {
        
        // Check existing values
        TurboBinarySearchTree<int> tree{};
        tree.Insert(10);
        tree.Insert(5);
        tree.Insert(15);
        tree.Insert(3);
        tree.Insert(7);
        tree.Insert(12);
        tree.Insert(17);

        
        EXPECT_TRUE(tree.Search(10));
        EXPECT_TRUE(tree.Search(5));
        EXPECT_TRUE(tree.Search(15));
        
        EXPECT_FALSE(tree.Search(100));
        EXPECT_FALSE(tree.Search(6));
    }

    TEST(BSTTest, RemoveTest)
    {
        TurboBinarySearchTree<int> tree{};

        tree.Insert(10);
        tree.Insert(5);
        tree.Insert(15);
        tree.Insert(3);
        tree.Insert(7);
        tree.Insert(12);
        tree.Insert(17);

        
        tree.Delete(3);
        EXPECT_FALSE(tree.Search(3));
        
        tree.Delete(5);
        EXPECT_FALSE(tree.Search(5));
        EXPECT_TRUE(tree.Search(7));
        
        tree.Delete(10);
        EXPECT_FALSE(tree.Search(10));
        EXPECT_TRUE(tree.Search(12));
        
        tree.Delete(100);
        EXPECT_FALSE(tree.Search(100));
    }
}
