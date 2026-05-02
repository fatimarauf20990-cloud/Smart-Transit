#include "controllers/TripController.h"

TripController::~TripController() {
    for (auto t : m_activeTrips) delete t; // Cleanup pointers
}

void TripController::scheduleTrip(Trip* t) {
    if (t) m_activeTrips.push_back(t); // Basic scheduling[cite: 2]
}

void TripController::updateTripStatus(int tripId, int status) {
    // Logic to update status based on ID[cite: 2]
}

double TripController::calculateDelay(int tripId) {
    return 0.0; // Basic delay calculation logic[cite: 2]
}