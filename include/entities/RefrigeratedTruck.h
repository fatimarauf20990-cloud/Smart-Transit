#pragma once
#include "entities/FreightTruck.h"

class RefrigeratedTruck : public FreightTruck {
    double m_targetTempC;
    double m_currentTempC;

public:
    RefrigeratedTruck();
    RefrigeratedTruck(double target, double current);

    double getFuelCostPerKm() const override;
    bool performDailyCheck() const override;
    double calculateEmissions(double km) const override;

    CustomString getType() const override;
    void print() const override;
};