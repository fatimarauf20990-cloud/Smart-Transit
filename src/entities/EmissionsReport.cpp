// EmissionsReport.cpp
#include "entities/EmissionsReport.h"

void EmissionsReport::generateReport() {
    std::cout << "Emissions Report generated\n";
}

void EmissionsReport::exportCSV(const CustomString& path) {
    std::cout << "Exporting Emissions report to " << path << "\n";
}

CustomString EmissionsReport::getTitle() const {
    return CustomString("Emissions Report");
}

void EmissionsReport::getDateRange(CustomDate& start, CustomDate& end) const {
    start = CustomDate(1,1,2024);
    end = CustomDate(31,12,2024);
}