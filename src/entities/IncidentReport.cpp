// IncidentReport.cpp
#include "entities/IncidentReport.h"

void IncidentReport::generateReport() {
    std::cout << "Incident Report generated\n";
}

void IncidentReport::exportCSV(const CustomString& path) {
    std::cout << "Exporting Incident report to " << path << "\n";
}

CustomString IncidentReport::getTitle() const {
    return CustomString("Incident Report");
}

void IncidentReport::getDateRange(CustomDate& start, CustomDate& end) const {
    start = CustomDate(1,1,2024);
    end = CustomDate(31,12,2024);
}