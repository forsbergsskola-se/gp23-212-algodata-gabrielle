#pragma once
#include <gmock/gmock-matchers.h>

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
        Node* newNode = new Node{item, lastNode};
        newNode->Previous;
        lastNode = newNode;
        top()=newNode;
    }

    T& top()
    {
        Node *top = nullptr;
        top= top->Previous;
        return top;
        // Return the Value of Last Node here.
    }

    const void pop()
    {
        if (lastNode.Previous==nullptr)
        {
            lastNode->Value=lastNode;
        }
        else
        {
            std::cout << "Empty";
        }
        
        // Assign the Last Node's Previous Node to be the Last Node.
        // -- This effectively removes the previously Last Node of the Stack
        // -- Imagine LastNode is customer 436
        // -- -- who remembered that customer 435 was before him.
        // -- We assign that before customer 435 to LastNode.
        // -- -- 435 knows that 434 was before him.
        // -- -- But he has no memory of customer 436.
    }
    
    bool empty() const {
        if(lastNode==nullptr)
            return true;
        // Return true, if the LastNode is null
    }

    size_t size() const {
        throw "NotImplementedException()";
        // Here, you need to do a while loop over all nodes
        // Similar to the previous PrintAllNodes Function
        // But instead of Printing Nodes, you just count how many Nodes you have visited
        // Similar to this:
        size_t count = 0;
        while(false/* remove false and replace with correct condition...*/){
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
            throw "NotImplementedException()";
            // Make currentNode point to currentNode's previous node
            return *this;
        }

        T& operator*() const {
            throw "NotImplementedException()";
            // Return the value of the CurrentNode
        }

        bool operator==(const Iterator<T>& other) const {
            throw "NotImplementedException()";
            // return true if both operators have the same current node
        }
        bool operator!=(const Iterator<T>& other) const {
            throw "NotImplementedException()";
            // return true if both operators have different current nodes
        }
    };

    Iterator<T> begin() {
        throw "NotImplementedException()";
        return Iterator<T>(LastNode);
    }
    
    Iterator<const T> begin() const {
        throw "NotImplementedException()";
        return Iterator<const T>(LastNode);
    }
};
