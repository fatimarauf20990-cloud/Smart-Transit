#pragma once
#include "utilities/GeoCoordinate.h"

class ChargingStation {
    int m_stationId;
    GeoCoordinate m_location;
    int m_totalSlots;
    int m_availableSlots;

public:
    ChargingStation();
    ChargingStation(int id, const GeoCoordinate& loc, int total, int available);
    void print() const;
};
