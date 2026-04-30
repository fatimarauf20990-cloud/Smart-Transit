#pragma once
#include "entities/Vehicle.h"

class ElectricScooter : public Vehicle {
    int m_batteryLevel;
    int m_rangeKm;
    CustomString m_dockingStationId;

public:
    ElectricScooter();
    ElectricScooter(int battery, int range, const CustomString& dockId);

    double getFuelCostPerKm() const override;
    bool performDailyCheck() const override;
    double calculateEmissions(double km) const override;

    CustomString getType() const override;
    void print() const override;
};
