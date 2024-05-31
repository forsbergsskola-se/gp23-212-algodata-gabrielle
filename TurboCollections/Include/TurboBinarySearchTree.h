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
            Node* sNode = new Node(data);
              if (root->value == data ) return root;

            while(root!=nullptr)
            {
                root = sNode;
                if (root < sNode->left)
                {
                    if (sNode->left!=nullptr)
                        return true;
                }
                else
                {
                    if (sNode->right!=nullptr)
                        return true;
                }
                
            }
            return false;
        }
        bool Delete(T data)
        {
            Node* remove = root;
           while (remove!=nullptr)
           {
               if (remove->value>data)
               {
                 if (data == remove->value)
                 {
                     delete remove;
                 }  
               }
               else
               {
                   if (data == remove->value)
                   {
                       delete remove;
                   }  
               }
           }
            return false;
        }
    };
};

