#pragma once
#include "entities/Vehicle.h"

class MetroTrain : public Vehicle {
    int m_lineId;
    int m_carriageCount;
    double m_maxSpeed;
    bool m_isUnderground;

public:
    MetroTrain();
    MetroTrain(int lineId, int carriages, double maxSpeed, bool underground);

    double getFuelCostPerKm() const override;
    bool performDailyCheck() const override;
    double calculateEmissions(double km) const override;

    CustomString getType() const override;
    void print() const override;
};
