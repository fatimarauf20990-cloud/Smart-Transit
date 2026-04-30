#pragma once
#include "entities/MetroTrain.h"

class HighSpeedTrain : public MetroTrain {
    int m_operatingSpeedKmh;
    int m_tiltAngle;
    CustomString m_signalClass;

public:
    HighSpeedTrain();
    HighSpeedTrain(int speed, int tilt, const CustomString& signal);

    double getFuelCostPerKm() const override;
    bool performDailyCheck() const override;
    double calculateEmissions(double km) const override;

    CustomString getType() const override;
    void print() const override;
};
