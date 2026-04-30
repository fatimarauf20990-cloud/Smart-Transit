#pragma once
#include "entities/Vehicle.h"

class FreightTruck : public Vehicle {
    double m_cargoWeightKg;
    double m_maxPayloadKg;
    bool m_refrigerated;

public:
    FreightTruck();
    FreightTruck(double cargo, double maxPayload, bool refrigerated);

    double getFuelCostPerKm() const override;
    bool performDailyCheck() const override;
    double calculateEmissions(double km) const override;

    CustomString getType() const override;
    void print() const override;
};
