#include "entities/FleetUtilisationReport.h"

void FleetUtilisationReport::generateReport() {
    std::cout << "Fleet Utilisation Report generated\n";
}

void FleetUtilisationReport::exportCSV(const CustomString& path) {
    std::cout << "Exporting Fleet report to " << path << "\n";
}

CustomString FleetUtilisationReport::getTitle() const {
    return CustomString("Fleet Utilisation Report");
}

void FleetUtilisationReport::getDateRange(CustomDate& start, CustomDate& end) const {
    start = CustomDate(1,1,2024);
    end = CustomDate(31,12,2024);
}