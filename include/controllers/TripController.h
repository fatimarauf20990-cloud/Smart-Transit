#pragma once
#include <vector>
#include "entities/Trip.h"

class TripController {
private:
    std::vector<Trip*> m_activeTrips;

public:
    ~TripController();
    void scheduleTrip(Trip* t);
    void updateTripStatus(int tripId, int status);
    double calculateDelay(int tripId); // Logic for delay calculation
};
