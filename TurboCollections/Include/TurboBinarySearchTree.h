#pragma once
#include <vector>

namespace TurboCollections
{
    template <typename T>
    class TurboBinarySearchTree
    {
        struct Node
        {
            int value;
            Node* left;
            Node* right;
            Node (int val): value(val), left(nullptr),right(nullptr){}
        };
        
    public:
        Node* root;
        void Insert( T data)
        {
            Node* newNode = new Node(data);
            if (root==nullptr)
            {
                root =newNode;
                return;
            }
            while (newNode)
            {
                if (newNode > root)
                {
                    
                    Insert(root->left->value);
        
                }

                if (newNode<root)
                {
                    Insert(root->right->value);
                }

            }
   
            
            
            bool Search(T);
            bool Delete(T);

        }
    };
};

