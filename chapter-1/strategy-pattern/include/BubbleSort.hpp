#ifndef BUUBLESORT_HPP
#define BUUBLESORT_HPP

#include <iostream>
#include <vector>
#include "ISort.hpp"

struct BubbleSort final : ISort {
    void sort(std::vector<int>& vector) override {
        std::cout << "BubbleSort::sort()\n";
        for (size_t i = 0; i < vector.size() - 1; i++) {
            for (size_t j = 0; j < vector.size() - i - 1; j++) {
                if (vector[j] > vector[j + 1]) {
                    std::swap(vector[j], vector[j + 1]);
                }
            }
        }
    }
};

#endif // BUUBLESORT_HPP
