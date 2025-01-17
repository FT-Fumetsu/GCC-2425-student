#ifndef ISort_HPP
#define ISort_HPP

#include <vector>

struct ISort {
    virtual ~ISort() = default;
    virtual void sort(std::vector<int>& vector) = 0;
};

#endif // ISort_HPP