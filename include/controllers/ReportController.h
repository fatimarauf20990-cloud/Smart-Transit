#pragma once
#include "entities/IReportGenerator.h"

class ReportController {
public:
    // Generate all reports via IReportGenerator polymorphism[cite: 2]
    void runReport(IReportGenerator* generator);
    void exportToCSV(IReportGenerator* generator, const char* path);
};