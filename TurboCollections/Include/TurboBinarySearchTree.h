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
            Node* current = root;
            while (current!=nullptr)
            {
                if (data < current->value)
                {
                    
                   current->left = current;
                    current->left = newNode;
        
                }

                if (data>current->value)
                {
                    current->right=current;
                    current->right=newNode;
                }
                break;

            }

        }
        
        bool Search(T data)
        {
              if (root == data ) return root;

            while(root!=nullptr)
            {
                if (data>root->left)
                {
                    return true;
                }
                else
                {
                    return true;
                }
                
            }
            return false;
        }
        bool Delete(T)
        {
            
        }
    };
};

