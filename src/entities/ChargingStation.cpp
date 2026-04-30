#include "entities/ChargingStation.h"
#include <iostream>

ChargingStation::ChargingStation()
    : m_stationId(0), m_location(0,0), m_totalSlots(0), m_availableSlots(0) {}

ChargingStation::ChargingStation(int id, const GeoCoordinate& loc, int total, int available)
    : m_stationId(id), m_location(loc), m_totalSlots(total), m_availableSlots(available) {}

void ChargingStation::print() const {
    std::cout << "ChargingStation " << m_stationId
              << " Slots: " << m_availableSlots << "/" << m_totalSlots << "\n";
}