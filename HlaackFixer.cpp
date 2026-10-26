#include <iostream>
// The int has a [] in the return type, which is not valid in C++.
static int vector_multiplication(double* vector, double* matrix, int rows, int cols);

int main() {

    std::cout << "Hello everyone!" << std::endl;
    std::cout << "This program contains two errors relating to a 2D array." << std::endl;
    std::cout << "Can you find them?" << std::endl;

    // 4D Homogeneous Vector
    double vector[4][1] = {
        { 1.27 },
        { 2.93 },
        { 0.79 },
        { 1.0 }
    };
// This function has 4 rows and 3 columns, but the array is declared with 4 rows and 4 columns. This will cause an error when trying to access the fourth column.
    double scale_t_matrix[4][4] = {
        { 1.25, 0.0,  0.0,  0.0 },
        { 0.0,  1.25, 0.0,  0.0 },
        { 0.0,  0.0,  1.25, 0.0 },
        { 0.0,  0.0,  0.0,  1.0}
    };

}
