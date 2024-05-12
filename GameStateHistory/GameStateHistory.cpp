
#include <iostream>
#include "..\TurboCollections/TurboLinkedStack.h"


int main(int argc, char* argv[])
{
    TurboLinkedStack<int> stack;
    int level{}, forSwitch;
    bool isRunning =true;

    while (isRunning==true)
    {
        std::cout <<" You are here: " <<forSwitch << "\n What do you want to do? ";
        switch (forSwitch /*not sure what to put here*/)
        {
            
        case 0:
            // level up
           stack.push(level);
            break;
        case 1:
            //  go to setting if on main menu
            //  go to main menu if on level 
            stack.top(); // should not be 'top' but not sure what
            break;
        case "b":
            // go back one step
            stack.pop();
            break;
                
        }
    }
    return 0;
}
