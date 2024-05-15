#include "TurboSort.h"
#include <iostream>
#include <list>


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

void TurboCollections:: TurboSort:: BubbleSort(std::vector<int> &bubSort)
{
        for (int i = bubSort.size()-1; i> 0;i--)
        {

            for (int j = 0; j<i;j++)
            {
                if (bubSort[j]>bubSort[j+1])
                {
                    std::swap(bubSort[j],bubSort[j+1]);
                }
            }
        }
    
}
   






