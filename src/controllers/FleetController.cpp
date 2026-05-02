#include "controllers/FleetController.h"

FleetController::~FleetController() {
    // Delete all vehicles to prevent memory leaks
    for (int i = 0; i < m_allVehicles.size(); i++) {
        delete m_allVehicles[i];
    }
}

void FleetController::addVehicle(Vehicle* v) {
    if (v != nullptr) {
        m_allVehicles.push_back(v); // Add to the list
    }
}

Vehicle* FleetController::findVehicle(const CustomString& regNo) {
    // Simple loop to find a vehicle by its registration number
    for (int i = 0; i < m_allVehicles.size(); i++) {
        if (m_allVehicles[i]->getRegistrationNo() == regNo) {
            return m_allVehicles[i];
        }
    }
    return nullptr; // Not found
}