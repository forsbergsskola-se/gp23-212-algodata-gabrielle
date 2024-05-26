#include <string>
#include <iostream>
#include "..\TurboCollections/TurboLinkedStack.h"


int main(int argc, char* argv[])
{
    TurboLinkedStack<int> stack;
    int level{}, choice;
    bool isRunning =true;
   

    while (isRunning==true)
    {
        std::cout<< "You are here ";
        if (stack.empty())
        {
            std::cout<< "Main Menu "<< std::endl;
        }
        
        std::cout <<"What do you want to do? ";
        std:: cin>>choice;
        switch (choice)
        {
            
        case 0:
            // level up
            stack.push(level++);
            stack.
            std::<< "Level "<<level << std::endl;
            
           
            
            break;
        case 1:
            //  go to setting if on main menu
            //  go to main menu if on level 
            // should not be 'top' but not sure what
            break;
        case 2:
            // go back one step
                if (level==0)
                    std::cout << "Main Menue"<< std::endl;
            else
            {
                stack.pop();
                std::cout<< "level"<<level-- << std::endl;
            }
            
            break;
        default:
                std:: cout<< "not a choice\n";
                break;
        }
    }
    return 0;
}
