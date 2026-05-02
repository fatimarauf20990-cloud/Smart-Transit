
#pragma once
#include "utilities/CustomString.h"

class FileController {
public:
    void saveSystem(const CustomString& filename); // Saves data to binary
    void loadSystem(const CustomString& filename); // Loads data back
};