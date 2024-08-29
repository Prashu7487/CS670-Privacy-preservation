# Oblivious Min Heap

## Project Overview

This project implements an Oblivious Min Heap using secret sharing and Multi-Party Computation (MPC). The heap is designed to perform operations such as extracting the minimum element in a way that preserves privacy.

## Directory Structure

- **src/**: Contains the source files.
  - `main.cpp`: The main entry point of the application.
  - `ObliviousMinHeap.cpp`: Implementation of the ObliviousMinHeap class.
  - `MPCOperations.cpp`: Implementation of MPC-related functions.
  - `Utils.cpp`: Utility functions.
- **include/**: Contains the header files.
  - `ObliviousMinHeap.h`: Declaration of the ObliviousMinHeap class.
  - `MPCOperations.h`: Declaration of MPC-related functions.
  - `Utils.h`: Declaration of utility functions.

### How to Use the Project

1. **Building**: Navigate to the project directory and run the following commands to build the project:

   ```bash
   mkdir build
   cd build
   cmake ..
   make
   ```

2. **Running**: After building, execute the binary to see the `Extract Min` operation in action:

   ```bash
   ./ObliviousMinHeap
   ```

This structured approach makes it easy to understand, extend, and maintain the project.
