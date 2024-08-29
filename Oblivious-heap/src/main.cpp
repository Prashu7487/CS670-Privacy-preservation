#include "ObliviousMinHeap.h"

int main() {
    // Initialize shares of the heap
    vector<int> A0 = {0, 3, 7, 2}; // P0's shares
    vector<int> A1 = {0, 5, 1, 6}; // P1's shares

    ObliviousMinHeap heap(A0, A1);

    // Extract the minimum value
    heap.extractMin();

    // Print the resulting heap
    heap.printHeap();

    return 0;
}
