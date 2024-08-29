#include "MPCOperations.h"

std::pair<int, int> obliviousCompare(int x0, int x1, int y0, int y1) {
    int c0 = 0, c1 = 0;
    if ((x0 + x1) < (y0 + y1)) {
        c0 = 1;
        c1 = 0;
    }
    return {c0, c1};
}

std::pair<int, int> duAttalahMPC(int c0, int c1, int A0, int A1, int B0, int B1) {
    int alpha0 = c0 * A0;
    int alpha1 = c1 * A1;
    int beta0 = (1 - c0) * B0;
    int beta1 = (1 - c1) * B1;

    return {alpha0 + beta0, alpha1 + beta1};
}
