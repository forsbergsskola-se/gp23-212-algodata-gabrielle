#include "../packages/gmock.1.11.0/lib/native/include/gmock/gmock-matchers.h"

template <typename T>
class TurboLinkedStack<T> {
    struct Node {
        T Value;
        Node* Previous;
    };
    Node* lastNode;
public:
    void push(const T& item) {
        //throw "NotImplementedException()";
        Node* FirstNode = new Node{0, nullptr};
        Node* LastNode = FirstNode;
        void addNumber(int number);
        {
            Node* newNode = new Node{number, nullptr};
            Lastnode.next = newNode;
            LastNode = newNode;
        }
        void printAllNumbers();
        {
            Node* currentNode = FirstNode;
            while(currentNode != nullptr){
                cout << currentNode->value << ", ";
                currentNode = currentNode.next;
            }
            Console.WriteLine("(END)");
        }

        for(int i = 1; i < 5; i++){
            addNumber(i);
        }

        printAllNumbers();
        // Insert Code from AddNumber Example in #4 here
    }

    T& top() {
        //throw "NotImplementedException()";
        if(!lastNode.empty())
        {
            return lastNode->Value;
        }
        // Return the Value of Last Node here.
    }

    const void pop()
    {
        //throw "NotImplementedException()";
        lastNode->Previous = lastNode; // Assign the Last Node's Previous Node to be the Last Node.
        
        // -- This effectively removes the previously Last Node of the Stack
        // -- Imagine LastNode is customer 436
        // -- -- who remembered that customer 435 was before him.
        // -- We assign that before customer 435 to LastNode.
        // -- -- 435 knows that 434 was before him.
        // -- -- But he has no memory of customer 436.
    }
    
    bool empty() const {
        //throw "NotImplementedException()";
        if (lastNode.empty())
        {
            return true;
        }
        // Return true, if the LastNode is null
    }

    size_t size() const {
        //throw "NotImplementedException()";
        // Here, you need to do a while loop over all nodes
        // Similar to the previous PrintAllNodes Function
        // But instead of Printing Nodes, you just count how many Nodes you have visited
        // Similar to this:
        size_t count = 0;
        while(count!=nullptr)
        {
            lastNode.size();
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
            //throw "NotImplementedException()";
            *currentNode = currentNode->Previous;
            // Make currentNode point to currentNode's previous node
            return *this;
        }

        T& operator*() const {
            //throw "NotImplementedException()";
            return currentNode->Value;
            // Return the value of the CurrentNode
        }

        bool operator==(const Iterator<T>& other) const {
            //throw "NotImplementedException()";
            
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
