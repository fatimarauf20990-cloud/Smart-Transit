#pragma once
#include "entities/CityBus.h"

class ArticulatedBus : public CityBus {
    int m_secondSegmentCapacity;
    double m_jointAngle;

public:
    ArticulatedBus();
    ArticulatedBus(int extraCapacity, double jointAngle);

    double getFuelCostPerKm() const override;
    bool performDailyCheck() const override;
    double calculateEmissions(double km) const override;

    CustomString getType() const override;
    void print() const override;
};
