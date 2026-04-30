// DriverPerformanceReport.cpp
#include "entities/DriverPerformanceReport.h"

void DriverPerformanceReport::generateReport() {
    std::cout << "Driver Performance Report generated\n";
}

void DriverPerformanceReport::exportCSV(const CustomString& path) {
    std::cout << "Exporting Driver Performance report to " << path << "\n";
}

CustomString DriverPerformanceReport::getTitle() const {
    return CustomString("Driver Performance Report");
}

void DriverPerformanceReport::getDateRange(CustomDate& start, CustomDate& end) const {
    start = CustomDate(1,1,2024);
    end = CustomDate(31,12,2024);
}