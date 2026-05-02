#pragma once
#include "entities/Vehicle.h"
#include "utilities/GeoCoordinate.h"

class DispatchController {
public:
    // Finds nearest vehicle using GeoCoordinate::distanceTo
    Vehicle* findNearestVehicle(const GeoCoordinate& location);
    void triggerEmergencyRedeployment(int areaId);
};
