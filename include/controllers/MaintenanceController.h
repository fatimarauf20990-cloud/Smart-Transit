#pragma once
#include <vector>
#include "entities/MaintenanceJob.h"

class MaintenanceController {
private:
    std::vector<MaintenanceJob*> m_jobs;

public:
    ~MaintenanceController();
    void scheduleJob(MaintenanceJob* job);
    double calculateDowntime(int vehicleId); // Logic for downtime[cite: 2]
};