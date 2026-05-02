#include "controllers/FileController.h"
#include <fstream>
#include <iostream>

void FileController::saveSystem(const CustomString& filename) {
    std::ofstream file(filename.c_str(), std::ios::binary); // Open file
    if (file.is_open()) {
        std::cout << "Saving data..." << std::endl;
        file.close();
    }
}

void FileController::loadSystem(const CustomString& filename) {
    std::ifstream file(filename.c_str(), std::ios::binary); // Open file
    if (file.is_open()) {
        std::cout << "Loading data..." << std::endl;
        file.close();
    }
}