#include "controllers/ReportController.h"

void ReportController::runReport(IReportGenerator* generator) {
    if (generator) {
        generator->generateReport(); // Polymorphic report generation[cite: 2]
    }
}

void ReportController::exportToCSV(IReportGenerator* generator, const char* path) {
    if (generator) {
        generator->exportCSV(path); // Polymorphic CSV export[cite: 2]
    }
}