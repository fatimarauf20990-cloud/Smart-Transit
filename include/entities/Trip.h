#pragma once
#include "utilities/CustomTime.h"

enum class TripStatus { SCHEDULED, IN_PROGRESS, COMPLETED, CANCELLED };

class Trip {
    int m_tripId;
    int m_vehicleId;
    int m_driverId;
    int m_routeId;
    CustomTime m_startTime;
    CustomTime m_actualStartTime;
    CustomTime m_endTime;
    int m_passengersBoardedTotal;
    TripStatus m_status;

public:
    Trip();
    Trip(int id, int vehicle, int driver, int route,
         const CustomTime& start, const CustomTime& actualStart,
         const CustomTime& end, int total, TripStatus status);
    void print() const;
};