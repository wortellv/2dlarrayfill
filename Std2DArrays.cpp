#include "Std2DArrays.h"
#include <iostream>

void fillArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns) {
    if (rows > MAXNUMBEROFROWS || columns > MAXNUMBEROFCOLUMNS) {
        throw std::invalid_argument("Incorrect number of rows or columns");
    }

    int value = rows * columns;
    for (int i = rows - 1; i >= 0; i--) {
        if ((rows - 1 - i) % 2 == 0) {
            for (int j = columns - 1; j >= 0; j--) {
                arr[i][j] = value--;
            }
        } else {
            for (int j = 0; j < columns; j++) {
                arr[i][j] = value--;
            }
        }
    }
}

void printArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
