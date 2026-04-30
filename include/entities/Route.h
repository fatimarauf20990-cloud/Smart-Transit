#pragma once
#include "utilities/CustomString.h"

class Route {
    int m_routeId;
    double m_totalDistanceKm;
    int m_schedFrequencyMinutes;
    bool m_isActive;

public:
    Route();
    Route(int id, double distance, int freq, bool active);
    void print() const;
};
