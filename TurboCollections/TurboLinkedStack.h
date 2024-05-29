#pragma once

template <typename T>
class TurboLinkedStack
{
    struct Node {
        T Value;
        Node* Previous;
       
    };
    
public:
    Node* lastNode;
    
    
    void push(const T& item)
    {
        Node* newNode = new Node{item,lastNode};
        newNode->Previous =lastNode;
        lastNode = newNode;
    }

    T& top()
    {
        if (!empty()) return lastNode->Value;
        // Return the Value of Last Node here.
    }

    const void pop()
    {
        if(!lastNode)
        {
            return;
        }
        lastNode->Value;
        Node* newNode = lastNode;
        lastNode = lastNode->Previous;
        
        if (newNode->Value<1)
        {
            lastNode=nullptr;
        }
        delete newNode;
    }
    
    bool empty() const {
        return lastNode==nullptr;
        // Return true, if the LastNode is null
    }

    size_t size() const
    {
        
        // Here, you need to do a while loop over all nodes
        // Similar to the previous PrintAllNodes Function
        // But instead of Printing Nodes, you just count how many Nodes you have visited
        // Similar to this:
        size_t count = 0;
        Node *newNode =lastNode;
        while(lastNode!=nullptr)
        {
            count++;
        }
        return count;
    }

    template<typename T>
    class Iterator{
        Node* currentNode;
        
    public:
        Iterator(Node* startAtNode) {
            currentNode = startAtNode;
        }

        Iterator<T>& operator++() {
            currentNode->Previous;
            // Make currentNode point to currentNode's previous node
            return *this;
        }

        T& operator*() const {
            return currentNode->Value;
            // Return the value of the CurrentNode
        }

        bool operator==(const Iterator<T>& other) const {
            Node *first = new Node(other);
            Node *second = new Node (other);
            if (first == second)
            {
                return true;
            }
            // return true if both operators have the same current node
        }
        bool operator!=(const Iterator<T>& other) const
        {
            Node *first = new Node(other);
            Node *second = new Node (other);
            if (first != second)
            {
                return true;
            }
            // return true if both operators have different current nodes
        }
    };

    Iterator<T> begin()
    {
        
        return Iterator<T>(lastNode);
    }
    
    Iterator<const T> begin() const
    {
        
        return Iterator<const T>(lastNode);
    }
};
