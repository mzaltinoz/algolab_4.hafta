#include <iostream>

int main() {
    const int rows = 3;
    const int columns = 3;

    int matrix1[rows][columns];
    int matrix2[rows][columns];
    int sumMatrix[rows][columns];

    std::cout << "Input elements in " << rows << "x" << columns << " matrix1:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            std::cin >> matrix1[i][j];
        }
    }

    std::cout << "Input elements in " << rows << "x" << columns << " matrix2:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            std::cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    std::cout << "\nSum of these matrices:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            std::cout << sumMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}