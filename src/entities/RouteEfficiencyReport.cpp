// RouteEfficiencyReport.cpp
#include "entities/RouteEfficiencyReport.h"

void RouteEfficiencyReport::generateReport() {
    std::cout << "Route Efficiency Report generated\n";
}

void RouteEfficiencyReport::exportCSV(const CustomString& path) {
    std::cout << "Exporting Route Efficiency report to " << path << "\n";
}

CustomString RouteEfficiencyReport::getTitle() const {
    return CustomString("Route Efficiency Report");
}

void RouteEfficiencyReport::getDateRange(CustomDate& start, CustomDate& end) const {
    start = CustomDate(1,1,2024);
    end = CustomDate(31,12,2024);
}