#ifndef INSERTIONSORT_HPP
#define INSERTIONSORT_HPP

#include <iostream>
#include <vector>
#include "ISort.hpp"

struct InsertionSort final : ISort {
    void sort(std::vector<int>& vector) override {
        std::cout << "InsertionSort::sort()\n";
        for (size_t i = 1; i < vector.size(); i++) {
            int key = vector[i];
            size_t j = i - 1;
            while (j >= 0 && vector[j] > key) {
                vector[j + 1] = vector[j];
                j--;
            }
            vector[j + 1] = key;
        }
    }
};

#endif // INSERTIONSORT_HPP
