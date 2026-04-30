#pragma once
#include "utilities/CustomString.h"
#include "utilities/CustomDate.h"

enum class MaintenanceStatus { SCHEDULED, IN_PROGRESS, COMPLETED };

class MaintenanceJob {
    int m_jobId;
    int m_vehicleId;
    int m_technicianId;
    CustomString m_description;
    CustomDate m_scheduledDate;
    CustomDate m_completedDate;
    double m_cost;
    MaintenanceStatus m_status;

public:
    MaintenanceJob();
    MaintenanceJob(int id, int vehicle, int tech, const CustomString& desc,
                   const CustomDate& sched, const CustomDate& done,
                   double cost, MaintenanceStatus status);
    void print() const;
};