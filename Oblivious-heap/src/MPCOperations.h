#ifndef MPC_OPERATIONS_H
#define MPC_OPERATIONS_H

#include <utility>

std::pair<int, int> obliviousCompare(int x0, int x1, int y0, int y1);
std::pair<int, int> duAttalahMPC(int c0, int c1, int A0, int A1, int B0, int B1);

#endif // MPC_OPERATIONS_H
