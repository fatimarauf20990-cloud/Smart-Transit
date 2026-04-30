#pragma once
#include "entities/Vehicle.h"

class RideHailCar : public Vehicle {
    double m_driverRating;
    int m_tripCount;
    double m_surgeMultiplier;

public:
    RideHailCar();
    RideHailCar(double rating, int trips, double surge);

    double getFuelCostPerKm() const override;
    bool performDailyCheck() const override;
    double calculateEmissions(double km) const override;

    CustomString getType() const override;
    void print() const override;
};
