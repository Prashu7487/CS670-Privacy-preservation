#include "ObliviousMinHeap.h"

ObliviousMinHeap::ObliviousMinHeap(const std::vector<int>& A0, const std::vector<int>& A1)
    : A0(A0), A1(A1) {}

void ObliviousMinHeap::extractMin() {
    int n = A0.size() - 1;
    int currentIndex = 1;
    int I0 = 1, I1 = 1;

    // Removing the minimum
    A0[1] = A0[n];
    A1[1] = A1[n];
    A0.pop_back();
    A1.pop_back();

    while (2 * I0 <= n) {
        int x0 = A0[2 * I0];
        int x1 = A1[2 * I0];
        int y0 = 0, y1 = 0;

        if (2 * I0 + 1 <= n) {
            y0 = A0[2 * I0 + 1];
            y1 = A1[2 * I0 + 1];
        }

        auto c = obliviousCompare(x0, x1, y0, y1);
        auto v = duAttalahMPC(c.first, c.second, x0, x1, y0, y1);
        auto s = duAttalahMPC(c.first, c.second, 2 * I0, 2 * I1, 2 * I0 + 1, 2 * I1 + 1);

        auto c_prime = obliviousCompare(A0[currentIndex], A1[currentIndex], v.first, v.second);
        auto z = duAttalahMPC(c_prime.first, c_prime.second, A0[currentIndex], A1[currentIndex], v.first, v.second);
        auto z_prime = duAttalahMPC(c_prime.first, c_prime.second, v.first, v.second, A0[currentIndex], A1[currentIndex]);

        A0[currentIndex] = z.first;
        A1[currentIndex] = z.second;

        int smallestIndex = s.first + s.second;
        A0[smallestIndex] = z_prime.first;
        A1[smallestIndex] = z_prime.second;

        currentIndex = smallestIndex;
        I0 = s.first;
        I1 = s.second;
    }
}

void ObliviousMinHeap::printHeap() const {
    for (size_t i = 1; i < A0.size(); ++i) {
        std::cout << "A[" << i << "] = " << A0[i] + A1[i] << " (A0[" << i << "]=" << A0[i] << ", A1[" << i << "]=" << A1[i] << ")\n";
    }
}
