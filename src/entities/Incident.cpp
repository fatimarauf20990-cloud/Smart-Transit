#include "entities/Incident.h"
#include <iostream>

Incident::Incident()
    : m_incidentId(0), m_vehicleId(0), m_driverId(0),
    m_description("N/A"), m_location(0,0), m_date(1,1,2000),
    m_time(0,0,0), m_severity(IncidentSeverity::LOW), m_isResolved(false) {}

Incident::Incident(int id, int vehicle, int driver, const CustomString& desc,
                   const GeoCoordinate& loc, const CustomDate& date, const CustomTime& time,
                   IncidentSeverity severity, bool resolved)
    : m_incidentId(id), m_vehicleId(vehicle), m_driverId(driver),
    m_description(desc), m_location(loc), m_date(date),
    m_time(time), m_severity(severity), m_isResolved(resolved) {}

void Incident::print() const {
    std::cout << "Incident " << m_incidentId
              << " Vehicle: " << m_vehicleId
              << " Resolved: " << (m_isResolved ? "Yes" : "No") << "\n";
}