#ifndef QUICKSORT_HPP
#define QUICKSORT_HPP

#include <iostream>
#include "ISort.hpp"

struct QuickSort final : ISort {
    void sort(std::vector<int>& v) override{
        std::cout << "BubbleSort::sort()\n";
    }
};

#endif // QUICKSORT_HPP