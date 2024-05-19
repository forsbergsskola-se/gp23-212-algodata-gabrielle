#include "TurboBinarySearchTree.h"

#include "../packages/gmock.1.11.0/lib/native/include/gmock/gmock-matchers.h"
#include "../packages/gmock.1.11.0/lib/native/include/gtest/internal/gtest-type-util.h"

struct Node
{
    int value;
    Node* left;
    Node* right;
};

template <typename T>
void TurboCollections::TurboBinarySearchTree<T>::Insert(T value)
{
    Node* root = new Node{value};
    
   if (root==nullptr)
       return;
    Insert(root->left);
    Insert()(root->right);
}
    //the left child has index n*2+1 
    //the right child has index n*2+2
    //(inserts a new item into the tree)
  
    

    

template <typename T>
bool TurboCollections::TurboBinarySearchTree<T>::Search(T)
{
    //(returns true if found)
}

template <typename T>
bool TurboCollections::TurboBinarySearchTree<T>::Delete(T)
{
    //(returns true if found and deleted),
}


