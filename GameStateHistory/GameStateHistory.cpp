#include <string>
#include <iostream>
#include "..\TurboCollections/TurboLinkedStack.h"


int main(int argc, char* argv[])
{
    TurboLinkedStack<int> stack;
    int level{}, choice;
    bool isRunning =true;
    std:: string settings, mainMenu;
    settings = "Settings";
    mainMenu = "Main Menu";

    while (isRunning==true)
    {
        if (stack.empty())
        {
            std:: cout<< "You are here: Main Menu\n";
        }
        else
        {
            std :: cout<< "Stack is not empty";
        }
        
        std::cout <<"What do you want to do? ";
        std:: cin>>choice;
        switch (choice)
        {
            
        case 0:
            // level up
                
           stack.push(level++);
            std::cout<< "You are here: level "<<level;
            
            break;
        case 1:
            //  go to setting if on main menu
            //  go to main menu if on level 
            // should not be 'top' but not sure what
            break;
        case 'b':
            // go back one step
            stack.push(level++);
            std::cout<< "level"<<level;
            break;
        default:
                std:: cout<< "not a choice\n";
                break;
        }
    }
    return 0;
}
