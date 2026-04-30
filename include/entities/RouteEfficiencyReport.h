// RouteEfficiencyReport.h
#pragma once
#include "IReportGenerator.h"
#include <iostream>

class RouteEfficiencyReport : public IReportGenerator {
public:
    void generateReport() override;
    void exportCSV(const CustomString& path) override;
    CustomString getTitle() const override;
    void getDateRange(CustomDate& start, CustomDate& end) const override;
};
