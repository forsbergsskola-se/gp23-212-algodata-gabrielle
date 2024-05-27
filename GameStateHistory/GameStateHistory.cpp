#include <string>
#include <iostream>
#include "..\TurboCollections/TurboLinkedStack.h"


int main(int argc, char* argv[])
{
    TurboLinkedStack<int> stack;
    int level{}, choice;
    bool isRunning =true;
   

    while (isRunning)
    {
        
        if (stack.empty())
        {
            std::cout<< "You are here: ";
            std::cout<< "Main Menu "<< std::endl;
            std::cout <<"What do you want to do? "<< std::endl;
            std:: cout<< "(0): Go to Level 1"<< std::endl;
            std:: cout<< "(1): Go to Settings"<< std::endl;
        }
        else
        {
            std::cout <<"What do you want to do? "<<std::endl;
            
            std::cout <<"(0): Go to Level "<< stack.top()<<std::endl;
            
            std::cout <<"(1): Go to Main Menu"<<std::endl;
            if (level <=1) std::cout <<"(b): Go back to Main Menu"<<std::endl;
            else
            {
                std::cout <<"(b): Go back to Level "<< stack.top()<<std::endl;
            }
        }
        
        std:: cin>>choice;
        switch (choice)
        {
            
        case 0:
            // level up
                if (!stack.empty())
                {
                    stack.push(stack.top()+1);
                    std::cout<< "You are here: ";
                    std:: cout<< "Level "<<stack.top() << std::endl;
                }
            else stack.push(0);
            
           
            
            break;
        case 1:
            //  go to setting if on main menu
            //  go to main menu if on level 
            // should not be 'top' but not sure what
            break;
        case 2:
            // go back one step
                if (level==1)
                {
                    std::cout<< "You are here: ";
                    std::cout << "Main Menu"<< std::endl;
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
