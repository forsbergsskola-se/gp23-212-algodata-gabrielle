#include "TurboSort.h"
#include <iostream>


void TurboCollections :: TurboSort :: SelectionSort(std::vector<int>& sortNum)
{
    for(int i =0; i<sortNum.size()-1;i++)
    {
        int min = i;
        for (int j=i+1;j<sortNum.size();j++)
        {
            if (sortNum[min]>sortNum[j])
            {
                min=j;
            }
        }
        if (min!=i)
        {
            std::swap(sortNum[i],sortNum[min]);
            
        }
    }
   
}
   






