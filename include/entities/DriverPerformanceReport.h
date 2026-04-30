// DriverPerformanceReport.h
#pragma once
#include "IReportGenerator.h"
#include <iostream>

class DriverPerformanceReport : public IReportGenerator {
public:
    void generateReport() override;
    void exportCSV(const CustomString& path) override;
    CustomString getTitle() const override;
    void getDateRange(CustomDate& start, CustomDate& end) const override;
};
