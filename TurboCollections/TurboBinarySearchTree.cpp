#include "TurboBinarySearchTree.h"

#include "../packages/gmock.1.11.0/lib/native/include/gtest/internal/gtest-type-util.h"

struct Node
{
    int value;
    Node* left;
    Node* right;
};

Node* createNode (int value)
{
    Node* newNode = new Node();
    newNode->value;
    newNode->left = nullptr;
    newNode->right =nullptr;
}

template <typename T>
void TurboCollections::TurboBinarySearchTree<T>::Insert(T)
{
    //the left child has index n*2+1 
    //the right child has index n*2+2
    //(inserts a new item into the tree)
    T root = new Node;
    root=nullptr;

    for(int i = 0; i <1000; i+=2)
    {
        if (i <root)
        {
            root = root*2+1;
        }
        else if(i>root)
        {
            root = root*2+2;
        }
        else
        {
            root=i;
        }

        
    }
    

    
}
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


