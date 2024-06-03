﻿#pragma once
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
            
            while (root!=nullptr)
            {
                if (data < root->value)
                {
                    root->left = newNode;
                    return;
        
                }

                if (data>root->value)
                {
                    root->right=newNode;
                    return;
                }

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
                return false;
            }
            
        }
        bool Delete(T data)
        {
            Node* remove = root;
           while (remove->value!=data)
           {
               if (remove->value>data)
               {
                   remove = remove->left;
                 if (data == remove->value)
                 {
                     delete remove;
                     return true;
                 }  
               }
               if (remove->value<data)
               {
                   remove = remove->right;
                   if (data == remove->value)
                   {
                       delete remove;
                       return true;
                   }  
               }
               return false;
           }
            
        }
    };
};

