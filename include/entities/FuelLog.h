#pragma once
#include "utilities/CustomDate.h"

class FuelLog {
    int m_logId;
    int m_vehicleId;
    double m_litersFilled;
    double m_costPerLitre;
    double m_totalCost;
    double m_odometer;
    CustomDate m_fillDate;

public:
    FuelLog();
    FuelLog(int id, int vehicle, double liters, double costPerLitre,
            double totalCost, double odometer, const CustomDate& date);
    void print() const;
};