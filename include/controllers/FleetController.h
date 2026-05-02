#pragma once
#include <vector>
#include "entities/Vehicle.h"

class FleetController {
private:
    std::vector<Vehicle*> m_allVehicles; // A list to store vehicles

public:
    ~FleetController(); // Destructor to clean up memory

    void addVehicle(Vehicle* v);
    void removeVehicle(int id);
    Vehicle* findVehicle(const CustomString& regNo); // Search for a vehicle
};