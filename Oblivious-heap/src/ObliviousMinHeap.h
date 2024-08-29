#ifndef OBLIVIOUS_MIN_HEAP_H
#define OBLIVIOUS_MIN_HEAP_H

#include <vector>
#include <iostream>
#include "MPCOperations.h"
#include "Utils.h"

class ObliviousMinHeap {
private:
    std::vector<int> A0; // P0's shares of the heap
    std::vector<int> A1; // P1's shares of the heap

public:
    ObliviousMinHeap(const std::vector<int>& A0, const std::vector<int>& A1);
    void extractMin();
    void printHeap() const;
};

#endif // OBLIVIOUS_MIN_HEAP_H
