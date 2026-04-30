#pragma once
#include "utilities/CustomString.h"
#include "utilities/CustomDate.h"

class IReportGenerator {
public:
    virtual ~IReportGenerator() = default;

    virtual void generateReport() = 0;

    virtual void exportCSV(const CustomString& path) = 0;

    virtual CustomString getTitle() const = 0;

    virtual void getDateRange(CustomDate& start, CustomDate& end) const = 0;
};
