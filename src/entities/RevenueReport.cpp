// RevenueReport.cpp
#include "entities/RevenueReport.h"

void RevenueReport::generateReport() {
    std::cout << "Revenue Report generated\n";
}

void RevenueReport::exportCSV(const CustomString& path) {
    std::cout << "Exporting Revenue report to " << path << "\n";
}

CustomString RevenueReport::getTitle() const {
    return CustomString("Revenue Report");
}

void RevenueReport::getDateRange(CustomDate& start, CustomDate& end) const {
    start = CustomDate(1,1,2024);
    end = CustomDate(31,12,2024);
}