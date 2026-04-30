#pragma once
#include "utilities/CustomString.h"
#include "utilities/CustomDate.h"
#include "utilities/CustomTime.h"
#include "utilities/GeoCoordinate.h"

enum class IncidentSeverity { LOW, MEDIUM, HIGH };

class Incident {
    int m_incidentId;
    int m_vehicleId;
    int m_driverId;
    CustomString m_description;
    GeoCoordinate m_location;
    CustomDate m_date;
    CustomTime m_time;
    IncidentSeverity m_severity;
    bool m_isResolved;

public:
    Incident();
    Incident(int id, int vehicle, int driver, const CustomString& desc,
             const GeoCoordinate& loc, const CustomDate& date, const CustomTime& time,
             IncidentSeverity severity, bool resolved);
    void print() const;
};
