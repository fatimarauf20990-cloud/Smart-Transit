#include "controllers/MaintenanceController.h"

MaintenanceController::~MaintenanceController() {
    for (auto j : m_jobs) delete j;
}

void MaintenanceController::scheduleJob(MaintenanceJob* job) {
    if (job) m_jobs.push_back(job); // Track jobs[cite: 2]
}

double MaintenanceController::calculateDowntime(int vehicleId) {
    return 0.0; // Logic for vehicle-downtime calculation[cite: 2]
}