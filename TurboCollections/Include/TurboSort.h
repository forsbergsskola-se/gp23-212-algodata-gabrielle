﻿#pragma once
#include <vector>

namespace TurboCollections
{
    static class TurboSort
    {
        TurboSort() =delete;
    public:
        
        static void SelectionSort(std::vector<int> &list);
        static void BubbleSort(std::vector<int> &bubble);
    
    };

}