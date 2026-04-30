#include "entities/Trip.h"
#include <iostream>

Trip::Trip()
    : m_tripId(0), m_vehicleId(0), m_driverId(0), m_routeId(0),
    m_startTime(0,0,0), m_actualStartTime(0,0,0), m_endTime(0,0,0),
    m_passengersBoardedTotal(0), m_status(TripStatus::SCHEDULED) {}

Trip::Trip(int id, int vehicle, int driver, int route,
           const CustomTime& start, const CustomTime& actualStart,
           const CustomTime& end, int total, TripStatus status)
    : m_tripId(id), m_vehicleId(vehicle), m_driverId(driver), m_routeId(route),
    m_startTime(start), m_actualStartTime(actualStart), m_endTime(end),
    m_passengersBoardedTotal(total), m_status(status) {}

void Trip::print() const {
    std::cout << "Trip " << m_tripId << " Vehicle: " << m_vehicleId
              << " Driver: " << m_driverId << " Route: " << m_routeId
              << " Passengers: " << m_passengersBoardedTotal << "\n";
}