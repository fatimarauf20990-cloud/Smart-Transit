#pragma once
#include "entities/Vehicle.h"

class CityBus : public Vehicle {
    CustomString m_busNumber;
    CustomString m_routeId;
    bool m_isAirConditioned;
    int m_nextStopId;

public:
    CityBus();
    CityBus(const CustomString& busNo, const CustomString& routeId,
            bool ac, int nextStop);

    double getFuelCostPerKm() const override;
    bool performDailyCheck() const override;
    double calculateEmissions(double km) const override;

    CustomString getType() const override;
    void print() const override;
};
