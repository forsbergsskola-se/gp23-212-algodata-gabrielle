#include <string>
#include <iostream>

//#include "../packages/gmock.1.11.0/lib/native/src/gtest/src/gtest-internal-inl.h"
#include "..\TurboCollections/TurboLinkedStack.h"


int main(int argc, char* argv[])
{
    TurboLinkedStack<int> stack;
    int choice;
    bool isRunning =true;
   

    while (isRunning)
    {
        
        if (stack.empty())
        {
            
            stack.push(0);
            std::cout<< "You are here: ";
            std::cout<< "Main Menu "<< std::endl;
            std::cout <<"What do you want to do? "<< std::endl;
            std:: cout<< "(0): Go to Level "<<stack.top()+1<< std::endl;
            std:: cout<< "(1): Go to Settings"<< std::endl;
            
            
        }
        else
        {
            std::cout <<"What do you want to do? "<<std::endl;
            std::cout <<"(0): Go to Level "<< stack.top()+1<<std::endl;
            std::cout <<"(1): Go to Main Menu"<<std::endl;

            if (stack.top() <=1) std::cout <<"(b): Go back to Main Menu"<<std::endl;
            else
            {
                std::cout <<"(b): Go back to Level "<< stack.top()-1<<std::endl;
            }
        }
        
        std:: cin>>choice;
        switch (choice)
        {
            
        case 0:
            // level up
            
            stack.push(stack.top()+1);
            std::cout<< "You are here: ";
            std:: cout<< "Level "<<stack.top() << std::endl;
                
            
           
            
            break;
        case 1:
            //  go to setting if on main menu
            //  go to main menu if on level 
            // should not be 'top' but not sure what
            break;
        case 2:
            // go back one step
            if (stack.top()-1 == 0)
            {
                stack.empty();
                std::cout<< "You are here: ";
                std::cout << "Main Menu"<< std::endl;
                stack.top()--;
            }
            else
            {
                stack.pop();
                std::cout<< "You are here ";
                std::cout<< "Level "<<stack.top() << std::endl;
            }
            
            break;
        default:
                std:: cout<< "not a choice\n";
                break;
        }
    }
    return 0;
}
