#pragma once
#include <iostream>
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
        
        Node* root = nullptr;
        void Insert( T data)
        {
            Node* newNode = new Node(data);
            if (root==nullptr)
            {
                root =newNode;
                return;
            }

            Node* current = root;
            Node* secondNode = nullptr;
            while (current!= nullptr)
            {
                secondNode=current;
                if (data < current->value)
                {
                    current = current->left;
                }
               else
                {
                    current = current->right;
                }
            }

            if (data < secondNode->value)
            {
                secondNode->left =newNode;
            }
            else
            {
                secondNode->right=newNode;
            }
            

        }
        
        bool Search(T data)
        {
            
            Node* current = root;
            
            while (current!= nullptr)
            {
                
                if (current->value == data ) return true;
                
                if (data < current->value)
                    {
                      current = current->left;
                    if  (current == nullptr)
                        return false;
                    }
                if (data > current->value)
                {
                    current = current->right;
                    if (current == nullptr)
                        return false;
                }
            }
            
        }
        bool Delete(T data)
        {
            Node* current = root;
            if (current == nullptr)
            {
                return false;
            }
            while (current!= nullptr)
            {
                if (current->value == data )
                {
                    delete current;
                    current = nullptr;
                    return true;
                }
                
                if (data < current->value)
                {
                    current = current->left;  
                }
                if (data > current->value)
                {
                    current = current->right;
                }
                
            }
            return false;
        }
    };
};

