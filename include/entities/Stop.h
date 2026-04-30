#pragma once
#include "utilities/CustomString.h"
#include "utilities/GeoCoordinate.h"

class Stop {
    int m_stopId;
    CustomString m_stopName;
    GeoCoordinate m_position;

public:
    Stop();
    Stop(int id, const CustomString& name, const GeoCoordinate& pos);
    void print() const;
};
