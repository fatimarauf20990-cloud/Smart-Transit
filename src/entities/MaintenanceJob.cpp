#include "entities/MaintenanceJob.h"
#include <iostream>

MaintenanceJob::MaintenanceJob()
    : m_jobId(0), m_vehicleId(0), m_technicianId(0),
    m_description("N/A"), m_scheduledDate(1,1,2000),
    m_completedDate(1,1,2000), m_cost(0.0), m_status(MaintenanceStatus::SCHEDULED) {}

MaintenanceJob::MaintenanceJob(int id, int vehicle, int tech, const CustomString& desc,
                               const CustomDate& sched, const CustomDate& done,
                               double cost, MaintenanceStatus status)
    : m_jobId(id), m_vehicleId(vehicle), m_technicianId(tech),
    m_description(desc), m_scheduledDate(sched),
    m_completedDate(done), m_cost(cost), m_status(status) {}

void MaintenanceJob::print() const {
    std::cout << "MaintenanceJob " << m_jobId
              << " Vehicle: " << m_vehicleId
              << " Cost: " << m_cost << "\n";
}